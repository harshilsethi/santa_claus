/*                                                                              
** EPITECH PROJECT, 2017
** globalUnitTests
** File description:                                                            
** all unit tests header
*/

#ifndef SANTA_CLAUS_GLOBALUNITTESTS_H
#define SANTA_CLAUS_GLOBALUNITTESTS_H


#include "Object/Object.h"
#include "Object/Toy.h"
#include "Object/Teddy.h"
#include "Object/LittlePony.h"
#include "Object/Wrap.h"
#include "Object/Box.h"
#include "Object/GiftPaper.h"
#include "Xmas/IElf.h"
#include "Xmas/ITable.h"
#include "Xmas/IConveyorBelt.h"

class globalUnitTests {
public:
	globalUnitTests();
	~globalUnitTests();
	void printOk(const std::string &);
	void printError(const std::string &);
	void toyUnitTests();
	void wrapUnitTests();
	void elfTableUnitTests();
};


#endif //SANTA_CLAUS_GLOBALUNITTESTS_H
