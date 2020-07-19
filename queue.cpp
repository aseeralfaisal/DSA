#include <iostream>
#include "queue.h"

using namespace std;

template <class T>
queue<T>::queue(){
    maxQueue = 501;
    front = -1;
    rear = -1;
    items = new T[maxQueue];
}

template <class T>
queue<T>::queue(int max){
    maxQueue=max+1;
    front=-1;
    rear=-1;
    items = new T[maxQueue];

}

template <class T>
bool queue<T>::isEmpty(){
    return (rear==front);
}

template <class T>
bool queue<T>::isFull(){
    return ((rear+1)%maxQueue== front);
}

template <class T>
void queue<T>::makeEmpty(){
    front=maxQueue-1;
    rear=maxQueue-1;
}

template <class T>
void queue<T>::enqueue(T newitem){
    if (isFull()) cout<<"Queue overflow."<<endl;
    else {
    rear= (rear+1)%maxQueue;
    items[rear] = newitem;
    }
}

template <class T>
void queue<T>::dequeue(T& item){
    if(isEmpty()) cout<<"Queue is empty."<<endl;
    else{
        front = (front+1)%maxQueue;
        item = items[front];
    }
}