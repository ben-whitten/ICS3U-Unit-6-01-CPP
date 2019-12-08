// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: December 2019
// This is a program which generates 10 numbers and tells you the average.

#include <iostream>


main() {
    // this is what runs the program.

    unsigned int seed = time(NULL);

    int randomNumber[10];
    int total;
    int counter;
    int number;
    int average;

    total = 0;

    for (int counter = 0; counter < 10; counter++) {
        number = (rand_r(&seed) % 10) + 1;
        randomNumber[counter] = number;
        total = total + randomNumber[counter];
        std::cout << randomNumber[counter] << " ";
    }
    std::cout << "" << std::endl;
    average = (total / 10);
    std::cout << "The average is: " << average << std::endl;
}
