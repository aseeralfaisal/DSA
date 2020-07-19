#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED
const int max_items = 5;

template <class T>
class SortedType
{
public:
    SortedType();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(T);
    void DeleteItem(T);
    void RetrieveItem(T&, bool&);
    void ResetList();
    void GetNextItem(T&);

private:
    int length;
    T info [max_items];
    int currentPos;
};
#endif // SORTEDTYPE_H_INCLUDED
