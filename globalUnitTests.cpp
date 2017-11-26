/*
** EPITECH PROJECT, 2017
** globalUnitTests
** File description:
** all unit tests C++ file
*/

#include "globalUnitTests.h"
#include "Xmas/PapaXmasElf.h"

globalUnitTests::globalUnitTests() {
	toyUnitTests();
	wrapUnitTests();
	elfTableUnitTests();
}

globalUnitTests::~globalUnitTests() {
}

void globalUnitTests::printOk(const std::string &line) {
	std::cout << line << std::endl;
}

void globalUnitTests::printError(const std::string &err) {
	std::cerr << err << std::endl;
}

void globalUnitTests::toyUnitTests() {
	printOk("==================================");
	std::cout << "Testing Toy class: " << std::endl << std::endl;
	try{
		Object **testCreateObject;

		testCreateObject = Object::MyUnitTests();
		if(testCreateObject[0]->getTitle() == "happy pony"){
			printOk("happy pony => ok");
		}else
			throw std::string("happy pony not created");

		if(testCreateObject[0]->getType()== LITTLEPONY){
			printOk("happy pony type => ok");
		}else
			throw std::string("happy pony have the wrong type");

		if(testCreateObject[1]->getTitle() == "cuddles"){
			printOk("cuddles => ok");
		}else
			throw std::string("happy pony not created");

		if(testCreateObject[1]->getType() == TEDDY){
			printOk("teddy type => ok");
		}else
			throw std::string("teddy have the wrong type");
		printOk("==================================");
	}
	catch(std::string &err){
		printError(err);
	}
}

void globalUnitTests::wrapUnitTests() {
	std::cout << "Testing Wrap class: " << std::endl << std::endl;
	try {
		Object *tryToWrap;
		Object **listOfObject = new Object*[4];
		listOfObject[0] = new Teddy("Baloo");
		listOfObject[1] = new Box();
		listOfObject[2] = new GiftPaper();
		listOfObject[3] = nullptr;
		tryToWrap = Wrap::MyUnitTests(listOfObject);

		if(tryToWrap->getType() == GIFTPAPER)
			printOk("GiftPaper => ok");
		else
			throw std::string("Wrong Wrap number 1");
		printOk("==================================");
	}catch(std::string &err) {
		printError(err);
	}
}

void globalUnitTests::elfTableUnitTests() {
	std::cout << "Testing Elf, Table & ConveyorBelt classes: " << std::endl << std::endl;
	PapaXmasElf e("Leeroy");
	PapaXmasTable table;
	PapaXmasConveyorBelt cBelt;

	e.look();
	e.pressInButton();

	e.setTable(table);
	e.setBelt(cBelt);


	e.look();
	e.pressInButton();
	e.takeFromBelt();
	e.look();
	e.pressInButton();

	printOk("==================================");
}