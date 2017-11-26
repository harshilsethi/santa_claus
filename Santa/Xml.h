/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** Xml.h
*/

#ifndef Xml_H_
#define Xml_H_

#include <boost/property_tree/xml_parser.hpp>
#include <boost/property_tree/ptree.hpp>

#include <iostream>
#include <string>
#include <fstream>

#include "../Object/Object.h"

struct Gift {
        std::string     type;
        int             object;
        std::string     title;
};

class Xml
{
public:
        Xml();
        ~Xml();

        Gift read(const std::string &);
};

#endif // Xml_H_
