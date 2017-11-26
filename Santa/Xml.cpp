/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** Xml.cpp
*/

#include "Xml.h"

Xml::Xml() = default;

Xml::~Xml() = default;

Gift Xml::deserialize(const std::string &filename) {
        // populate tree structure pt
        boost::property_tree::ptree pt;
	read_xml(filename, pt);

        // traverse pt
        Gift toy;
        toy.type = pt.get<std::string>("giftpaper.box.toy.type");
        toy.object = pt.get<int>("giftpaper.box.toy.object");
        toy.title = pt.get<std::string>("giftpaper.box.toy.title");	
        switch(toy.object) {
                case 0 :
			std::cout << "gra hu" << std::endl;
                        break;
                case 1 :
			std::cout << "yo man" << std::endl;
                        break;
        }
	std::cout << "In " << filename << ", there is a " << toy.type << " and its name is " << toy.title << " !" << std::endl;
        return (toy);
}

void Xml::serialize(std::ostream &os) {
        boost::property_tree::ptree pt;

        Gift gift;
        gift.type = "TEDDY"; //toy->getTypeName();
	gift.object = 0; //toy->getType();
        gift.title = "Teddyursa"; //toy->getTitle();
        pt.add("xml.version", 0);
        boost::property_tree::ptree &node = pt.add("giftpaper.box.toy", "");
        node.put("type", gift.type);
        node.put("object", gift.object);
        node.put("title", gift.title);

        write_xml(os, pt);
}
