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

void print_pyramid(char start, int lines, bool growing) {
    int current_line = 1;
    int line_chars;
    int char_adj;
    if (growing) {
        line_chars = 1;
        char_adj = 1;
    }
    else {
        line_chars = lines;
        char_adj = -1;
    }
    while (current_line <= lines) {
        char current_char = start;
        int char_count = 1;
        while (char_count <= line_chars) {
            std::cout << current_char << ' ';
            ++char_count; ++current_char;
        }
        ++current_line;
        line_chars = line_chars + char_adj;
        std::cout << std::endl;
    }
}