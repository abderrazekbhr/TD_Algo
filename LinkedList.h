class LinkedList
{
private:
    int val;
    LinkedList* nextNoed;
public:
    LinkedList(int val);
    int getVal();
    LinkedList* getNextNoed();
    void setNextNoed(LinkedList* noed);
    ~LinkedList();
};


