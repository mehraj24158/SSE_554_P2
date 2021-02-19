#pragma once
#include <iostream>
#include <thread>
#include "car.hpp"
#include "tire.hpp"
#include "frame.hpp"

// class Factory
// {
// public:

//     //Each factory will contain one thread for each type of component
//     //attributes
//     std::thread tire;
//     std::thread engine;
//     std::thread body;
//     //constructor sets the threads to point at the functor of interest
//     Factory(std::thread t, std::thread e, std::thread b);

//     //Main thread operation which communicates with other three sub-threads
//     void operate(/*pointer to a vector of car objs*/);
// };

//Install tires if not present in car
void TireInstaller(Car* c);

//Install Engine if not present in car
void EngineInstaller(Car* c);

//Install Engine if not present in car
void FrameInstaller(Car* c);

//Check if all cars are complete
bool Validate(Car* c);