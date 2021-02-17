#include "tires.hpp"
#include <iostream>
using namespace std;

//Constructor 
//Tire::Tire(s, mod, comStat) : size(s),modelName(mod), completeStatus(comState) {}

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
string returnCompleteStatus(){ 

}
void main(){ 
    int size; 
    string modelName = " "; 
    string completeStatus = " "; 
    Tire tire1 = new Tire(size, modelName, completeStatus);
    tire1.set_model(modelName); 
    cout<<modelName; 

}




