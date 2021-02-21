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

// TEST(EmptyCar, VectorCompleteInstall){
    
//     std::vector<Car*> cars;

//     for(int i = 0; i<10; i++)
//     {
//         Car one;
//         Car* P = &one;
//         cars.push_back(P);
//     }

//     using call_type = void ();
//     std::thread engine(call_type(EngineInstaller), std::ref(cars));
    
//     // std::thread engine(EngineInstaller, std::ref(cars));
//     std::thread frame(FrameInstaller, std::ref(cars));
//     std::thread tire(TireInstaller, std::ref(cars));

//     engine.join();
//     frame.join();
//     tire.join();

//     for(Car* P: cars)
//     {
//         ASSERT_TRUE(&P->engine != NULL);
//         ASSERT_TRUE(&P->frame != NULL);
//         ASSERT_TRUE(&P->tire!= NULL);
//         ASSERT_TRUE(P->tire.size()==4) << P->tire.size() << " Number of tires";
//     }
// };




TEST(EmptyCar, EngineInstall){
    Car one;
    Car* P = &one;

    auto engine_install = static_cast<void (Operations::*)(Car*)>(&(Operations::EngineInstaller));
    std::thread engine(engine_install, std::ref(P));
    
    engine.join();
    ASSERT_TRUE(&P->engine != NULL);
};

// TEST(EmptyCar, FrameInstall){
  
//     Car one;
//     Car* P = &one;
//     std::thread frame(FrameInstaller, std::ref(P));
//     frame.join();
//     ASSERT_TRUE(&P->frame != NULL);
// };

// TEST(EmptyCar, TireInstall){
//     Car one;
//     Car* P = &one;
//     std::thread tire(TireInstaller, std::ref(P));
//     tire.join();
//     ASSERT_TRUE(&P->tire!= NULL);
//     ASSERT_TRUE(P->tire.size()==4) << P->tire.size() << " Number of tires";
// };


