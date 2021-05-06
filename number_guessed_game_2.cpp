// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Thu/May6/2021
// This program a Number Guessing Game


#include <iostream>
#include <random>


int main() {
    // this function checks if the number guessed is correct or wrong

    std::string guessedNumberString;
    int guessedNumber;
    int someRandomNumber;

    std::cout << "hey,guess the number if you can!\n" << std::endl;

    // input
    std::cout << "Enter the number between 0 - 9:"
    << std::endl;
    std::cin >> guessedNumberString;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0 , 9);  // [0,9]
    someRandomNumber = idist(rgen);

    // process & output
     try {
        guessedNumber = std::stoi(guessedNumberString);
        
        if (guessedNumber == someRandomNumber) {
        // output
        std::cout << "You guessed correct!" << std::endl;
        std::cout << "Thanks for playing." << std::endl;
        } else if (guessedNumber != someRandomNumber){
        // output
        std::cout << "You guessed wrong!" << std::endl;
        std::cout << "Thanks for playing." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "this is not an integer!" << std::endl;
        std::cout << "Thanks for playing." << std::endl;
    }


std::cout << "\n\nDone." << std::endl;
}
