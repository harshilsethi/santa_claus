/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** Santa.cpp
*/

#include "Xml.h"

int main(int argc, char **argv) {
        Xml xml;
	std::ofstream file;
	std::string filename;
	if(argc == 1) {
		std::cout << "Please enter the gift number : ";
		getline(std::cin, filename);
		filename = "gift" + filename + ".xml";
		file.open(filename.c_str());
		xml.serialize(file);
		file.close();
	}
	if(argc > 1) {
		for(int i = 1; i < argc; i++) {
			if(argv[i])
				xml.deserialize(argv[i]);
		}
	}
        return (0);
}
