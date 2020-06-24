//
// Created by matth on 6/24/2020.
//
#include <iostream>

void print_ascii(char start, char end) {
    char current = start;
    while (current <= end) {
        std::cout << "Character " << current << " is " << static_cast<int>(current) << " in ASCII\n";
        ++current;
    }
}