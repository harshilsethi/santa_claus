/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** Santa.cpp
*/

#include <string>
#include <fstream>
#include <iostream>

int main(int argc, char **argv) {
        std::string     fileName;
        std::ifstream   file;
        std::string     line;
        std::string     content = "";
	
        for(int i = 1; i < argc; i++) {
                file.open(argv[i]);
                if(!file.good()) {
                        std::cerr << "Cannot read file" << std::endl;
                        return (0);
                }
                while(!file.eof()) {
                        getline(file, line);
			content += line;
                }
		file.close();
		std::cout << content << std::endl;
		content = "";
                std::cout << "The " << argv[i] << " is here !" << std::endl;
        }
	
        return (0);
}
