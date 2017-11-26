#include <iostream>
#include <string>
#include "Object/Teddy.h"
#include "Object/LittlePony.h"
#include "Object/Wrap.h"
#include "Object/Box.h"
#include "Object/GiftPaper.h"
#include "Xmas/ITable.h"
#include "Xmas/PapaXmasTable.h"
#include "Xmas/IElf.h"
#include "Xmas/PapaXmasElf.h"

void run(PapaXmasElf &elf) {
	// Assignment to tables and conveyor belts
	PapaXmasTable table;
	elf.setTable(table);
	elf.look();

	PapaXmasConveyorBelt belt;
	elf.setBelt(belt);

	/**
	 * Check how many toys are on the table, wrap them and send them to Santa
	 */
	std::list<Object> objectsOnTable1 = table.getObjects();
	std::list<Box> boxes;
	std::list<Toy> toys;
	std::list<GiftPaper> papers;
	std::string errEmptyLists = elf.getName() + ": Cannot prepare a present with missing stuff !";
	std::list<Box>::iterator itBox;
	std::list<GiftPaper>::iterator itPaper;

	// put objects in right categories
	for (auto &object : objectsOnTable1) {
		if (object.getTypeName() == "box")
			boxes.push_back(static_cast<Box&>(object));
		else if (object.getTypeName() == "gift paper")
			papers.push_back(static_cast<GiftPaper&>(object));
		else if (object.getTypeName() == "teddy" || object.getTypeName() == "little pony")
			toys.push_back(static_cast<Toy&>(object));
	}
	if (toys.empty() || papers.empty()) {
		elf.report(errEmptyLists);
		return;
	}
	itPaper = papers.begin();
	for (auto &toy : toys) {
		std::string wrapSentence = elf.getName() + ": Let's wrap a toy...";
		elf.talk(wrapSentence);
		if (!boxes.empty() && itBox != boxes.end()) {
			itBox = boxes.begin();
			std::cout << elf.getName() << ": let's open this box..." << std::endl;
			itBox->openMe();
			toy.isTaken();
			itBox->wrapMeThat(&toy);
			itBox->closeMe();
			if (itPaper != papers.end())
				itPaper->wrapMeThat(&*itBox);
			else
				elf.report(errEmptyLists);
		} else {
			if (itPaper != papers.end()) {
				toy.isTaken();
				itPaper->wrapMeThat(&toy);
			} else
				elf.report(errEmptyLists);
		}
		if (itBox != boxes.end())
			++itBox;
		if (itPaper != papers.end())
			++itPaper;
	}


	/** Pense-bête : pour récupérer un jouet dans une boîte dans un papier :
	 *
	 * 				Object *obj = itPaper->getObject();
				std::cout << "OBJECT : " << obj->getTypeName() << std::endl;
				Box obj2 = dynamic_cast<Box &>(*obj);
				Object *obj3 = obj2.getObject();
				std::cout << "OBJECT ² : " << obj3->getTypeName() << std::endl;
	 */
}

int main() {
	Wrap *wrap = nullptr;

	Object *pObjectMissing[4];
	pObjectMissing[0] = new Teddy("Ted");
	pObjectMissing[1] = new Box();
	pObjectMissing[2] = new Box();
	pObjectMissing[3] = nullptr;
	wrap->MyUnitTests(pObjectMissing);

	Object *pObject[4];
	pObject[0] = new LittlePony("Licorn");
	pObject[1] = new Box();
	pObject[2] = new GiftPaper();
	pObject[3] = nullptr;
	wrap->MyUnitTests(pObject);

	std::cout << "========================================" << std::endl;
	std::cout << "--- WELCOME TO THE CHRISTMAS FACTORY ---" << std::endl;
	std::cout << "========================================" << std::endl;

	// Elves creation
	PapaXmasElf elf1;
	std::string kennyName = "Kenny";
	PapaXmasElf elf2(kennyName);

	run(elf1);
	//run(elf2);
	return 0;
}