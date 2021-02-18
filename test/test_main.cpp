#include "gtest/gtest.h"
#include "test_main.hpp"

// For example vector of 5 cars randomly generated
// loop through each car and a seperate vector containing each thread will install the neccessary part
//  
// Details:
// First create a vector with cars
// second create threads that point to functions which installs a particular car part
// Third Loop through the vector of cars and, within the loop, pass the car object
// Cars should come out complete and can be validated easily. 


TEST(complete_car, Default){
    std::vector<Car> cars;
    Car one;
    cars.push_back(one);
    std::cout<< "Test Works";
};

TEST(incomplete_car, Default){
    ;
};

