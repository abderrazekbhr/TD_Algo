#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    const int NB_ELEMENT_MAX=100;
    Stack *newStack=new Stack(NB_ELEMENT_MAX);
    for(int i=0;i<20;i++){
        newStack->push(i);
    }
    int i=0;
    while(true){
        i++;
        try{
            cout<<"index "<<i<<"="<<newStack->pop()<<endl;
        }catch(exception e){
            cout <<e.what()<<endl;
            break;
        }

    }
    
}