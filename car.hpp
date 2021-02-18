#pragma once
#include "tire.hpp"
#include "frame.hpp"
#include "engine.hpp"
#include <vector>


class Car
{   
public:
    //attributes
    vector<Tire> t;
    Frame f;
    Engine e;

    //constructors
    Car();
};