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

void print_pyramid(char start, int lines) {
    int current_line = 1;
    while (current_line <= lines) {
        char current_char = start;
        int char_count = 1;
        while (char_count <= current_line) {
            std::cout << current_char << ' ';
            ++char_count;
            ++current_char;
        }
    ++current_line;
    std::cout << std::endl;
    }

}