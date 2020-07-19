#ifndef STACKTYPE_H
#define STACKTYPE_H
#include<iostream>
using namespace std;

const int max_items = 5;
template< class T>
class StackType
{
    public:
        StackType();
        bool IsFull();
        bool IsEmpty();
        void Push(T);
        void Pop();
        T Top();
        void printItem();

    private:
        int top;
        T items[max_items];
};

#endif // STACKTYPE_H
