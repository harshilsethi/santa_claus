#include <iostream>
#include "Object/Teddy.h"
#include "Object/Wrap.h"
#include "Object/Box.h"
#include "Object/GiftPaper.h"
#include "Object/ITable.h"
#include "Object/PapaXmasTable.h"

int main() {
	Wrap *wrap;

	Object *pObjectMissing[4];
	pObjectMissing[0] = new Teddy("Teddy 1");
	pObjectMissing[1] = new Box();
	pObjectMissing[2] = new Box();
	pObjectMissing[3] = nullptr;
	wrap->MyUnitTests(pObjectMissing);

	Object *pObject[4];
	pObject[0] = new Teddy("Teddy 2");
	pObject[1] = new Box();
	pObject[2] = new GiftPaper();
	pObject[3] = nullptr;
	wrap->MyUnitTests(pObject);

	PapaXmasTable table;
	ITable *table1 = table.createTable();
	table1->getObjects();

	return 0;
}
