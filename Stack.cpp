#include "Stack.h"
#include <iostream>
#include <limits>
using namespace std;
Stack::Stack(int max)
{
    this->max = max;
    this->nbElements = 0;
    this->tab = new int[max];
    for (size_t i = 0; i < max; i++){
        this->tab[i] = 0;
    }    
}
Stack::~Stack()
{
    delete[] this->tab;
}

void Stack::push(int elements){
    if(nbElements==max){
        throw runtime_error("Stack overflow");
    }
    tab[nbElements]=elements;
    nbElements++;
}
int Stack::top(){
    if(nbElements==0){
        throw runtime_error("Stack is empty");
    }
    return tab[nbElements-1];
}

int Stack::pop(){
    if(nbElements==0){
        throw runtime_error("Stack is empty");
    }    
    int val=tab[nbElements-1];
    nbElements--;
    return val;
}
