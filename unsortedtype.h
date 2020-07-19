#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H

const int max_items = 5;

template <class ItemType>
class UnsortedType
{
    public:
        UnsortedType();
        void MakeEmpty();
        bool IsFull();
        int LengthIs();
        void InsertItem(ItemType);
        void DeleteItem(ItemType);
        void RetrieveItem(ItemType&, bool&);
        void ResetList();
        void GetNextItem(ItemType&);

    private:
        int length;
        ItemType info[max_items];
        int currentPos;
};

#endif // UNSORTEDTYPE_H
