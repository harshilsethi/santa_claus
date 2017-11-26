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
#include "globalUnitTests.h"
#include "Xmas/TableRandom.h"
#include "Xmas/RandomConveyorBelt.h"

void run(PapaXmasElf &elf) {
	/**
	 * Check how many toys are on the table, wrap them and send them to Santa
	 */
	std::list<Object> objectsOnTable1 = elf.getTable()->getObjects();
	std::list<Box> boxes;
	std::list<Toy> toys;
	std::list<GiftPaper> papers;
	std::list<Box>::iterator itBox;
	std::list<GiftPaper>::iterator itPaper;
	std::string errEmptyLists = elf.getName() + ": Cannot prepare a present with missing stuff !";
	std::string giftSentSentence = elf.getName() + ": Gift sent to Santa !";

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
			itBox->wrapMeThat(toy);
			elf.getTable()->deleteFromTable(toy);
			itBox->closeMe();
			if (itPaper != papers.end()) {
				itPaper->wrapMeThat(*itBox);
				elf.getTable()->deleteFromTable(*itBox);
				elf.getBelt()->setObject(&*itPaper);
				elf.getTable()->deleteFromTable(*itPaper);
				std::cout << "BEFORE OUT BUTTON" << std::endl;
				elf.pressOutButton();
				std::cout << "AFTER OUT BUTTON" << std::endl;
				elf.talk(giftSentSentence);
			}
			else
				elf.report(errEmptyLists);
		} else {
			if (itPaper != papers.end()) {
				itPaper->wrapMeThat(toy);
				elf.getTable()->deleteFromTable(toy);
				elf.getBelt()->setObject(&*itPaper);
				elf.talk(giftSentSentence);
			} else
				elf.report(errEmptyLists);
		}
		if (itBox != boxes.end())
			++itBox;
		if (itPaper != papers.end())
			++itPaper;
	}
	elf.look();
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

	// Elves creation with BASIC STUFF
	PapaXmasElf elf1;
	std::string kennyName = "Kenny";
	PapaXmasElf elf2(kennyName);

	// Assignment to tables and conveyor belts
	PapaXmasTable table1;
	elf1.setTable(table1);
	elf1.look();
	PapaXmasConveyorBelt belt1;
	elf1.setBelt(belt1);

	PapaXmasTable table2;
	elf2.setTable(table2);
	elf2.look();
	PapaXmasConveyorBelt belt2;
	elf2.setBelt(belt2);

	run(elf1);
	run(elf2);


	// Elves creation with RANDOM STUFF

	PapaXmasElf elf3("Bob");
	PapaXmasElf elf4("Diot");

	TableRandom table3;
	elf3.setTable(table3);
	elf3.look();
	RandomConveyorBelt belt3;
	elf3.setBelt(belt3);

	/*
	PapaXmasTable table4;
	elf4.setTable(table4);
	elf4.look();
	PapaXmasConveyorBelt belt4;
	elf4.setBelt(belt4);
*/
	run(elf3);
//	run(elf4);



	globalUnitTests Go;
	return 0;
}