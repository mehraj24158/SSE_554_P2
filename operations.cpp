#include <thread>

void EngineCreator();
void BodyCreator();
void TireCreator();

void main()
{
    std::thread t2(BodyCreator);
    std::thread t1(EngineCreator);
    std::thread t2(TireCreator)
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