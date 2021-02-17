#include "tires.hpp"
#include <iostream>
using namespace std;

Tires :: Tires(s, cnt, mod,comStat): size(s), count(cnt), modelName(mod), completionStatus(cnt){} 


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
string returnCompletionStatus(int cnt, string comStat){ 
    for(int i = 1; i<=4; i++){
         int count = 0+i; 
    }
    string status = "4 Tires have been produced. "; 
    return status; 
}





