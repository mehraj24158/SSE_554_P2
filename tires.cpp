#include "tires.hpp"
#include <iostream>
using namespace std;

// Constructors
Tires::Tires(int s, int cnt, string mod, string comStat) : size(s), count(cnt), modelName(mod), completionStatus(comStat)
{} 

// get methods
int Tires::get_size(){ 
    return size; 
}

string Tires:: get_model(){ 
    return modelName; 
}

// set methods
void Tires :: set_size(int s){
    this->size = s;   
}

void Tires::set_model(string mod){
    this->modelName = mod; 
}


// Not sure what this is 
// int returnCompletionStatus(){ 
//     int count = 0;
//     for(int i = 1; i<=4; i++){
//          count +=1
//     }
//     return count; 
// }

int main(){ 
    Tires tire1; 
    tire1.set_size(19); 
    tire1.get_size(); 
    tire1.set_model("Model 3"); 
    tire1.get_model(); 
    tire1.returnCompleteStatus();
}




