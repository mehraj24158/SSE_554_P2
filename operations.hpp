#pragma once
#include <iostream>
#include <thread>
class Factory
{
public:

    //Each factory will contain one thread for each type of component
    //attributes
    std::thread tire;
    std::thread engine;
    std::thread body;

    //constructor sets the threads to point at the functor of interest
    Factory(std::thread t, std::thread e, std::thread b);

    void operate(/*pointer to a vector of car objs*/);
};

void TireInstaller(/*pointer to car obj*/)
{   
    //Install tires if not present in car
}

void EngineInstaller(/*pointer to car obj*/)
{   
    //Install Engine if not present in car
}

void BodyInstaller(/*pointer to car obj*/)
{   
    //Install Engine if not present in car
}

void Validate(/*pointer to a vector of car objs*/)
{
    //Check if all cars are completede\
}