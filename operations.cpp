#include <thread>
#include <vector>
#include "operations.hpp"



void EngineCreator();
void BodyCreator();
void TireCreator();

// Create Factory object containing threads. 
// Pass car object to the factory object and let it finish the car
void main()
{
    std::thread t1(BodyCreator);
    t1.join();
    std::thread t2(EngineCreator);
    t2.join();
    std::thread t3(TireCreator);
    t3.join();
}

void EngineCreator()
{
    
}
void BodyCreator()
{

}
void TireCreator()
{

}