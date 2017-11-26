//
// EPITECH PROJECT, 2017
// 
// File description:
//
//

#include <sstream>
#include "Xml.h"
#include "../Object/Wrap.h"

Xml::Xml() {}

Xml::~Xml() {}

std::string Xml::serialize(Object *object) {
	std::ostringstream xml;
	if(object){
		xml << "<" << object->getTypeName() <<"> \n";
		if(object->getTypeName() != "little pony"
			|| object->getTypeName() != "teddy")
			if (!((Wrap *) object)->isEmpty()) {
				xml << Xml::serialize(((Wrap *) object)->getObject());
			}
			else
				xml << object->getTitle() << "\n";
		xml << "</" << object->getTypeName() << "> \n";
	}
	return xml.str();
}