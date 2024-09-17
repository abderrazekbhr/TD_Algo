class Stack
{
private:
    int nbElements;
    int *tab;
    int max;
public:
    Stack(int max);
    ~Stack();
    void push(int element);
    int pop();
    int top();    
};

