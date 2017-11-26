/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** Santa.cpp
*/

#include "../Xml/Xml.h"
#include "../Object/Teddy.h"

int main(int argc, char **argv) {
        Xml xml;
        Teddy teddy("Ursaring");
        std::ofstream file;
        std::string filename;
        if(argc == 1) {
                std::cout << "Please enter the gift number : ";
                getline(std::cin, filename);
                filename = "gift" + filename + ".xml";
                file.open(filename.c_str());
                xml.serialize(&teddy, file);
                file.close();
        }
        if(argc > 1) {
                for(int i = 1; i < argc; i++) {
                        xml.deserialize(argv[i]);
                }
        }
        return (0);
}
