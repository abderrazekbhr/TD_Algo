#include <iostream>
#include <StackLinkedList.h>
#include <LinkedList.h>
using namespace std;
StackLinkedList::StackLinkedList(int nbElements, int max)
{
    this->nbElements = nbElements;
    this->max = max;
    this->head = nullptr;
}
StackLinkedList::~StackLinkedList()
{
    LinkedList *noed;
    while (head->getNextNoed() != nullptr)
    {
        noed = head->getNextNoed();
        head->setNextNoed(head->getNextNoed());
        delete noed;
    }
    delete head;
}
void StackLinkedList::push(int val)
{
    if (nbElements < max)
    {
        if (head == nullptr)
        {
            head = new LinkedList(val);
        }
        else
        {
            LinkedList *noed = new LinkedList(val);
            noed->setNextNoed(head);
            head = noed;
        }
    }
    else
    {
        throw runtime_error("Stack overflow");
    }
}
int StackLinkedList::pop()
{
    if (nbElements == 0)
    {
        throw runtime_error("Stack is empty");
    }
    LinkedList *noed = head;
    int valNoed = head->getVal();
    head = head->getNextNoed();
    nbElements--;
    delete noed;
    return valNoed;
}
int StackLinkedList::top()
{
    if (nbElements == 0)
    {
        throw runtime_error("Stack is empty");
    }
    LinkedList *noed = head;
    int valNoed = head->getVal();
    return valNoed;
}