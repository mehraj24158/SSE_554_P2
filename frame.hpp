#include <iostream>  
using namespace std; 

class Frame {
    //attributes
    private: 
    int body;
    int nuts_bolts; 
    public:
    //functions 
    int getBodyStatus(Frame body); 
    int countNutsBolts(Frame nuts_bolts); 
};