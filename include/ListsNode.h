#include <iostream>
using namespace std;
template <class T>
class Node
{
private:
    T Element;
    Node* Next;
public :
    Node* Head;
    Node (T Member)
    {
        Element = Member;
        Next = nullptr;
        Head = nullptr;
    }
    void InsertAtHead(T Member)
    {
        Node* n = new Node(Member);
        n -> Next = Head;
        Head = n;
    }
    void InsertAfterExistingNode(T  Key, T Member) const
    {
        Node* n = new Node(Member);
        Node* Temp = Head;
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
        Node* n = new Node(Member);
        if (Head == nullptr)
        {
            Head = n;
            return;
        }
        Node* Temp = Head;
        while (Temp -> Next != nullptr)
        {
            Temp = Temp -> Next;
        }
        Temp -> Next = n;
    }
    void DeleteNode(T Key)
    {
        Node *Temp = &*Head;
        Node *FirstElement = &*Head;
        Node *Prev;
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
        Node* Temp = Head;
        while (Temp != nullptr)
        {
            cout << Temp -> Element << ", ";
            Temp = Temp -> Next;
        }
    }
    T SearchNode(T Key)
    {
        Node* Temp = Head;
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