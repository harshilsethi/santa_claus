//
// EPITECH PROJECT, 2017
// 
// File description:
//
//

#include <fstream>
#include "RandomConveyorBelt.h"
#include "../Object/Wrap.h"
#include "../Object/GiftPaper.h"
#include "../Object/Box.h"
#include "../Xml/Xml.h"

RandomConveyorBelt::RandomConveyorBelt() {
	this->objectOnbelt = nullptr;
}

RandomConveyorBelt::~RandomConveyorBelt() = default;

IConveyorBelt *RandomConveyorBelt::createConveyorBelt() {
	IConveyorBelt *belt = new RandomConveyorBelt();
	return belt;
}

void RandomConveyorBelt::inButton() {
	Wrap *newObject;
	if(random() % 2)
		newObject = new GiftPaper();
	else
		newObject = new Box;
	this->objectOnbelt = newObject;
}

void RandomConveyorBelt::outButton() {
	Object *tmp;
	std::ofstream file;
	std::string filename;
	Xml xml;
	//std::string    gift;
	tmp = this->getObject();
	Object *toy;

	if (!tmp)
		return;
	if (((static_cast<Wrap&>(*tmp)).getObject())->getTypeName() == "teddy" || ((static_cast<Wrap&>(*tmp)).getObject())->getTypeName() =="little pony") {
		toy = (dynamic_cast<Wrap&>(*tmp)).getObject();
	} else {
		std::cout << "///// TOY ? : " <<  (dynamic_cast<Wrap&>(static_cast<Wrap&>(*tmp)).getObject())->getTypeName()<< std::endl;
	}
	std::cout << "Please enter the gift number : ";
	getline(std::cin, filename);
	filename = "gift" + filename + ".xml";
	file.open(filename.c_str());
	xml.serialize(toy, file);
	file.close();
	//gift = Xml::serialize(tmp);
	//std::cout << gift << std::endl;
	std::cout << "Sent to santas claus" << std::endl;
	this->objectOnbelt = nullptr;
}

Object *RandomConveyorBelt::getObject() {
	if(!this->objectOnbelt)
		return nullptr;
	else
		return (objectOnbelt);}

void RandomConveyorBelt::setObject(Object *object) {
	if(this->objectOnbelt)
		return;
	else
		this->objectOnbelt = object;
}