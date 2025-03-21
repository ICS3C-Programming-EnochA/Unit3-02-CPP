// Copyright (c) 2025 Enoch Amedjrovi All rights reserved
// Created by:Enoch Amedjrovi
// 19 March 19, 2025
// This program creates a guessing game
#include <iostream>

int main() {
    // guess the correct number
    const int CORRECT_NUMBER = 9;
    int guessedNumber;

    std::cout << "Guess the correct number: ";
    std::cin >> guessedNumber;

    // Check if it's correct
    if (guessedNumber == CORRECT_NUMBER) {
        std::cout << "You guessed correctly!" << std::endl;
    }
    // check if it's wrong
    if (guessedNumber == CORRECT_NUMBER) {
        std::cout << "correct number!" << std::endl;
    }
    // check if it's correct
    if (guessedNumber != CORRECT_NUMBER) {
        std::cout << "You guessed wrong." << std::endl;
    }

    return 0;
}
