#include "frame.hpp"
using namespace std; 

Frame::Frame() : body(0), nuts_bolts(0){ }

int Frame::getBodyStatus(){ 
    return this->body;
}