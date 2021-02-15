#pragma once
#include <iostream>

class tire;
class engine;
class body;

class car
{
    // Should probably have an array or vector with 4 tires. 
    tire t;
    engine e;
    body b;

    // make sure tires are good before the vechicle is compelted
    // could have other check methods
    void check_tires();
};

class tire{

    // Not sure what the data types for these are
    //rotation

    // I think tire sizes are done in inches
    int size;
};

class engine{
    //
    //calibration

    std::string type;
};

class body{

    // probably create seperate classes for sedan van etc
    ;
};
