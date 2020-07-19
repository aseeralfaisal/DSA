#include "stacktype.h"
#include<iostream>
using namespace std;

template<class T>
StackType<T>::StackType()
{
    top =-1;
}

template<class T>
bool StackType<T>::IsEmpty()
{
    return (top == -1);
}

template<class T>
bool StackType<T>::IsFull()
{
    return (top == max_items-1);
}

template<class T>
void StackType<T>::Push(T newItem)
{
    if(IsFull())
        cout<<"Stack is Full"<<endl;
    else{
        top++;
        items[top] = newItem;
    }
}

template<class T>
void StackType<T>::Pop()
{
    if(IsEmpty())
        cout<<"Stack is empty"<<endl;
    else
        top--;
}

template<class T>
T StackType<T>::Top()
{
    return items[top];
}

template<class T>
void StackType<T>::printItem()
{
    int i = top;
    while(i>=0){
        cout<<items[i]<<"\t";
        i--;
    }
    cout<<endl;
}
