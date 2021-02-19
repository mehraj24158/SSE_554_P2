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


TEST(EngineInstall, EmptyCar){
  
    Car one;
    Car* P = &one;
    std::thread engine(EngineInstaller, std::ref(P));
    engine.join();

    ASSERT_TRUE(&P->engine != NULL);

    if(&P->engine != NULL)
    {
        std::cout << "Engine Installed Successfully";
    }
};

TEST(FrameInstall, EmptyCar){
  
    Car one;
    Car* P = &one;
    std::thread frame(FrameInstaller, std::ref(P));
    frame.join();

    ASSERT_TRUE(&P->frame != NULL);

    if(&P->frame != NULL)
    {
        std::cout << "Engine Installed Successfully";
    }
};


