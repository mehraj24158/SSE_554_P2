#include "tires.hpp"
#include <iostream>
using namespace std;

Tires::Tires(s, cnt, mod,comStat) {}: size(s), count(cnt), modelName(mod), completionStatus(comStat)
{} 


void Tires :: set_size(int s){
    this->size = s; 
    size = 19; //19" tires  
}
int Tires::get_size(){ 
    return size; 
}
void Tires::set_model(string mod){
    this->modelName = mod; 
}
string Tires:: get_model(){ 
    return modelName; 
}
int returnCompletionStatus(int cnt){ 
    for(int i = 1; i<=4; i++){
         int count = 0+i; 
    }
    return count; 

}
int main(){ 
    Tires tire1 = new Tires(); 
    tire1.set_size(); 
    tire1.get_size(); 
    tire1.set_model(); 
    tire1.get_model(); 
    tire1.returnCompletionStatus(); 

}




