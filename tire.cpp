#include "tire.hpp"
#include <iostream>
using namespace std;

//Constructor 
Tire::Tire (int s, string mod, string comStat) {}

void Tire :: set_size(int s){
    this->size = s; 
    size = 19; //19" tires  
}
int Tire::get_size(){ 
    return size; 
}
void Tire::set_model(string mod){
    this->modelName = mod; 
    modelName = "Goodyear"; 
}
string Tire:: get_model(){ 
    return modelName; 
}
string returnCompleteStatus(string comStat){ 
    string comStat = "Complete"; 
    return comStat; 
}
/*int main(){ 
    int size; 
    string modelName = " "; 
    string completeStatus = " "; 
    Tire tire1 = Tire(size, modelName, completeStatus);
    tire1.set_model(modelName); 
    cout<<modelName; 
    return 0; 
}*/




