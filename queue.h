#ifndef queue_h_included
#define queue_h_included
#include <iostream>

template <class T>
class queue{

    private:
    int front;
    int rear;
    int maxQueue;
    T* items;

    public:
    queue();
    queue(int max);
    ~queue();
    void makeEmpty();
    bool isEmpty();
    bool isFull();
    void enqueue(T);
    void dequeue(T&);
};
#endif