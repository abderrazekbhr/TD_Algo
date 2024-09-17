#include "LinkedList.h"
class StackLinkedList
{
private:
    int nbElements;
    int max;
    LinkedList* head;
public:
    StackLinkedList(int nbElements,int max);
    ~StackLinkedList();
    void push(int val);
    int pop();
    int top();
};

