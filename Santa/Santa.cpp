/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** Santa.cpp
*/

#include "Xml.h"

int main(int argc, char **argv) {
        Xml xml;
	if(argc > 1) {
		for(int i = 1; i < argc; i++)
			xml.read(argv[i]);
	}
        return (0);
}
