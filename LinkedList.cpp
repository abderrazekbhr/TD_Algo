#include <iostream>
#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList(int val)
{
    this->val = val;
    nextNoed=nullptr;
}
int LinkedList::getVal()
{
    return val;
}
LinkedList *LinkedList::getNextNoed()
{
    return nextNoed;
}
void LinkedList::setNextNoed(LinkedList *noed)
{
    this->nextNoed = noed;
}
LinkedList::~LinkedList()
{
    delete nextNoed;
}