#include <iostream>
#include "node.h"
using namespace std;
template <class T>
class List
{
private :
    Node <T> *Head = nullptr;
public:
    void InsertAtHead(T Member)
    {
        Node <T> *n = new Node(Member);
        n -> _Next = Head;
        Head = n;
    }
    void InsertAfterExistingNode(T Key, T Member) const
    {
        Node <T> *n = new Node(Member);
        Node <T> *Temp = Head;
        while (Temp -> GetElementValue() != Key)
        {
            Temp = Temp -> _Next;
            if (Temp == nullptr)
            {
                return;
            }
        }
        n -> _Next = Temp -> _Next;
        Temp -> _Next = n;
    }
    void InsertAtEnd(T Member)
    {
        Node <T> *n = new Node(Member);
        if (Head == nullptr)
        {
            Head = n;
            return;
        }
        Node <T> *Temp = Head;
        while (Temp -> _Next != nullptr)
        {
            Temp = Temp -> _Next;
        }
        Temp -> _Next = n;
    }
    void DeleteNode(T Key)
    {
        Node <T> *Temp = &*Head;
        Node <T> *FirstElement = &*Head;
        Node <T> *Prev;
        while (Temp != nullptr)
        {
            if (Temp -> GetElementValue() == Key)
            {
                break;
            }
            Prev = Temp;
            Temp = Temp -> _Next;
        }
        if (Temp == nullptr)
        {
            return;
        }
        if (Temp -> GetElementValue() == FirstElement -> GetElementValue())
        {
            *&Head = Temp -> _Next;
        }
        else
        {
            Prev -> _Next = Temp -> _Next;
        }
        free(Temp);
    }
    void Print()
    {
        cout << "the members of your list are : " << endl;
        Node <T> *Temp = Head;
        while (Temp != nullptr)
        {
            cout << Temp -> GetElementValue() << ", ";
            Temp = Temp -> _Next;
        }
    }
    T SearchNode(T Key)
    {
        Node <T> *Temp = Head;
        while (Temp != nullptr)
        {
            if (Temp -> GetElementValue() == Key)
            {
                return true;
            }
            Temp = Temp -> _Next;
        }
        return false;
    }
};