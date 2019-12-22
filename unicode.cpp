// Copyright (c) 2019 Andrei Chirilov All rights reserved.
//
// Created by: Andrei Chirilov
// Created on: December 2019
// This program get's the marks from user and calculates the average

#include <iostream>
#include <map>

std::string UnicodeConverter(std::string word) {
    // This takes a given word and converts it to the unicode equivalent

    std::string unicodeWord = "";
    std::string output;

    std::map<char, std::string> letters = {
        {'a', "61"},
        {'b', "62"},
        {'c', "63"},
        {'d', "64"},
        {'e', "65"},
        {'f', "66"},
        {'g', "67"},
        {'h', "68"},
        {'i', "69"},
        {'j', "6a"},
        {'k', "6b"},
        {'l', "6c"},
        {'m', "6d"},
        {'n', "6e"},
        {'o', "6f"},
        {'p', "70"},
        {'q', "71"},
        {'r', "72"},
        {'s', "73"},
        {'t', "74"},
        {'u', "75"},
        {'v', "76"},
        {'w', "77"},
        {'x', "78"},
        {'y', "79"},
        {'z', "7a"},
    };

    for (char letter : word) {
        if (letters.count(letter) > 0) {
            unicodeWord = unicodeWord + letters[letter] + " ";
        } else {
            return "Sorry, this character is not in my list.";
        }
    }
    return "In unicode the word is: " + unicodeWord;
}

int main() {
    // This takes the user's word and passes it to UnicodeConverter()

    // variable to store user word
    std::string word;

    // input
    std::cout << "Enter a word that you would like translated:" << std::endl;
    std::cin >> word;

    word = UnicodeConverter(word);

    // process
    std::cout << std::endl << word;
}
