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

int main() {
	Wrap *wrap = nullptr;


	Object *pObjectMissing[3];
	pObjectMissing[0] = new Teddy("Ted");
	pObjectMissing[1] = new Box();
	pObjectMissing[2] = new Box();
//	pObjectMissing[3] = nullptr;
	wrap->MyUnitTests(pObjectMissing);

	Object *pObject[3];
	pObject[0] = new LittlePony("Licorn");
	pObject[1] = new Box();
	pObject[2] = new GiftPaper();
//	pObject[3] = nullptr;
	wrap->MyUnitTests(pObject);

	PapaXmasTable table1;
	PapaXmasTable table2;

	// Elves creation
	PapaXmasElf elf1;
	std::string kennyName = "Kenny";
	PapaXmasElf elf2(kennyName);

	// Assignment to tables and conveyor belts

	elf1.setTable(table1);
	elf2.setTable(table2);
	elf1.look();
	elf2.look();

	globalUnitTests Go;

	return 0;
}