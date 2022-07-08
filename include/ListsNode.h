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
        n -> Next = Head;
        Head = n;
    }
    void InsertAfterExistingNode(T Key, T Member) const
    {
        Node <T> *n = new Node(Member);
        Node <T> *Temp = Head;
        while (Temp -> Element != Key)
        {
            Temp = Temp -> Next;
            if (Temp == nullptr)
            {
                return;
            }
        }
        n -> Next = Temp -> Next;
        Temp -> Next = n;
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
        while (Temp -> Next != nullptr)
        {
            Temp = Temp -> Next;
        }
        Temp -> Next = n;
    }
    void DeleteNode(T Key)
    {
        Node <T> *Temp = &*Head;
        Node <T> *FirstElement = &*Head;
        Node <T> *Prev;
        while (Temp != nullptr)
        {
            if (Temp -> Element == Key)
            {
                break;
            }
            Prev = Temp;
            Temp = Temp -> Next;
        }
        if (Temp == nullptr)
        {
            return;
        }
        if (Temp -> Element == FirstElement -> Element)
        {
            *&Head = Temp -> Next;
        }
        else
        {
            Prev -> Next = Temp -> Next;
        }
        free(Temp);
    }
    void Print()
    {
        Node <T> *Temp = Head;
        while (Temp != nullptr)
        {
            cout << Temp -> Element << ", ";
            Temp = Temp -> Next;
        }
    }
    T SearchNode(T Key)
    {
        Node <T> *Temp = Head;
        while (Temp != nullptr)
        {
            if (Temp -> Element == Key)
            {
                return true;
            }
            Temp = Temp->Next;
        }
        return false;
    }
};