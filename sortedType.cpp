#include"sortedType.h"
#include<iostream>
using namespace std;
template<class T>
SortedType<T>::SortedType()
{
    length = 0;
    currentPos = -1;
}
template<class T>
void SortedType<T>::MakeEmpty()
{
    length = 0;
}
template<class T>
bool SortedType<T>::IsFull()
{
    return (length = max_items);
}
template<class T>
int SortedType<T>::LengthIs()
{
    return length;
}

template<class T>
void SortedType<T>::ResetList()
{
    currentPos = -1;
}
template<class T>
void SortedType<T>::InsertItem(T item)
{
        int location = 0;
        for(int i = 0 ; i < length; i++)
        {
            if(item > info[i])//item.operator>(info[i])
            {
                location++;
            }
            else
            {
                break;
            }
        }
        for(int j = length-1 ; j>=location; j--)
        {
            info[j+1] = info[j];
        }
        info[location] = item;
        length++;


}

template<class T>
void SortedType<T>::GetNextItem(T &item)
{
    currentPos++;
    item = info[currentPos];
}

template<class T>
void SortedType<T>::DeleteItem(T item)
{
    int location = 0;
    for(int i=0; i<length; i++)
    {
        if(item == info[i])
        {
            break;
        }
        location++;
    }
    for(int i=location; i<length-1; i++)
    {
        info[i] = info[i+1];
    }
    length--;

}

template<class T>
void SortedType<T>::RetrieveItem(T& item, bool& found)
{
    for(int i=0; i<length; i++)
    {
        if(info[i] == item)
        {
            found = true;
            break;
        }
        else
        {
            found = false;
        }
    }
}
