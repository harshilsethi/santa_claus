/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** Xml.cpp
*/

#include "Xml.h"

Xml::Xml() = default;

Xml::~Xml() = default;

Toy Xml::read(const std::string &filename) {
        // populate tree structure pt
        boost::property_tree::ptree pt;
        read_xml(filename, pt);

        // traverse pt
        Toy toy;
        toy.type = pt.get<std::string>("giftpaper.box.toy.type");
        toy.object = pt.get<int>("giftpaper.box.toy.object");
        toy.title = pt.get<std::string>("giftpaper.box.toy.title");
        std::cout << "In " << filename << ", there is a " << toy.type << " and its name is " << toy.title << " !" << std::endl;
        return (toy);
}
