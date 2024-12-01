//
//  Task_1.cpp
//  advent_of_code_2024
//
//  Created by Roland Kalituha on 01/12/2024.
//

#include "Task_1_and_2.hpp"
#include <iostream> // Needed for printing

void Task_1_and_2::printArray(int(&array)[2][1000]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 1000; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int (&Task_1_and_2::getSortedLists())[2][1000] {
    static int sorted[2][1000];

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 1000; ++j) {
            sorted[i][j] = lists[i][j];
        }
    }
    
    std::sort(sorted[0], sorted[0] + 1000);
    std::sort(sorted[1], sorted[1] + 1000);

    return sorted;
}

int (&Task_1_and_2::getDiffs(int(&array)[2][1000]))[1000] {
    static int diffs[1000];
    
    for (int j = 0; j < 1000; ++j) {
        diffs[j] = std::abs(array[0][j] - array[1][j]);
    }

    return diffs;
}

int (&Task_1_and_2::getOccurenciesList())[2][1000] {
    static int occurencies[2][1000];
    
    for (int i = 0; i < 1000; ++i) {
        occurencies[0][i] = lists[0][i];
        occurencies[1][i] = 0;
        for (int j = 0; j < 1000; ++j) {
            if (lists[0][i] == lists[1][j]) {
                occurencies[1][i] += 1;
            }
        }
    }

    return occurencies;
}

int (&Task_1_and_2::getMultiplies(int(&array)[2][1000]))[1000] {
    static int diffs[1000];
    
    for (int j = 0; j < 1000; ++j) {
        diffs[j] = array[0][j] * array[1][j];
    }

    return diffs;
}

int Task_1_and_2::getResult(int(&array)[1000]) {
    int result = 0;
    
    for (int j = 0; j < 1000; ++j) {
        result += array[j];
    }

    return result;
}
