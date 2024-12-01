//
//  main.cpp
//  advent_of_code_2024
//
//  Created by Roland Kalituha on 01/12/2024.
//

#include <iostream>
#include "Day_1/Task_1_and_2.hpp"


int main(int argc, const char * argv[]) {
    Task_1_and_2 day1;
    int task1_result = day1.getResult(day1.getDiffs(day1.getSortedLists()));
    std::cout << task1_result << std::endl;
    
    int task2_result = day1.getResult(day1.getMultiplies(day1.getOccurenciesList()));
    std::cout << task2_result << std::endl;
    
    return 0;
}
