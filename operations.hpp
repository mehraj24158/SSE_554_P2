#pragma once
#include <iostream>
#include <thread>
#include "car.hpp"
#include "tire.hpp"
#include "frame.hpp"

class Operations
{
public:
    Operations();

    //Install Engine if not present in car
    void EngineInstaller(Car* c);
    void EngineInstaller(std::vector<Car*> cars);

    //Install Engine if not present in car
    void FrameInstaller(Car* c);
    void FrameInstaller(std::vector<Car*> cars);

    //Install tires if not present in car
    void TireInstaller(Car* c);
    void TireInstaller(std::vector<Car*> cars);

    //Check if all cars are complete
    bool Validate(Car* c);
};
