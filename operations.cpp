#include "operations.hpp"

//Install Engine if not present in car
void EngineInstaller(Car* c)
{   
    if(&(c->engine) == NULL)
    {
        Engine e;
        c->engine = e;
    }
}

void EngineInstallerVect(std::vector<Car*> cars)
{   
    for(Car* c:cars)
    {
        if(&(c->engine) == NULL)
        {
            Engine e;
            c->engine = e;
        }
    }
}

//Install Frame if not present in car
void FrameInstaller(Car* c)
{
    if(&(c->frame) == NULL)
    {
        Frame f;
        c->frame = f;
    }
}

void FrameInstallerVect(std::vector<Car*> cars)
{
    for(Car* c:cars)
    {
        if(&(c->frame) == NULL)
        {
            Frame f;
            c->frame = f;
        }
    }
}

//Install Tire if not present in car
void TireInstaller(Car* c)
{
    if(c->tire.size() < 4)
    {
        for(int i = c->tire.size(); i<4; i++)
        {
            Tire t;
            Tire* x = &t;
            c->tire.push_back(x);
        }
    }
}

void TireInstallerVect(std::vector<Car*> cars)
{
    for(Car* c:cars)
    {
        if(c->tire.size() < 4)
        {
            for(int i = c->tire.size(); i<4; i++)
            {
                Tire t;
                Tire* x = &t;
                c->tire.push_back(x);
            }
        }
    }
}


//Check if car is are complete
bool Validate(Car* c)
{
    if(&(c->tire) == NULL && &(c->engine) == NULL && &(c->frame) == NULL)
    {
        return true;
    }
    else
        return false;
}