#include <iostream>
using namespace std; 

class Tires{ 
    public: 
     Tires(int s,int cnt, string mod,string comStat);
     int size;
     int count; 
     string modelName; 
     string completionStatus; 
     void Tires :: set_size(int s);
     int get_size();
     void Tires::set_model(string mod);
     string get_model();
     string returnCompleteStatus(int count, string completionStatus); 
};

