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

	PapaXmasTable table;

	// Elf creation
	IElf *elf1 = new PapaXmasElf();
	std::string kennyName = "Kenny";
	IElf *elf2 = new PapaXmasElf(kennyName);

	// Assignment to tables and conveyor belts


	return 0;
}