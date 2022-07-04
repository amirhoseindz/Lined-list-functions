#include "../include/ListsNode.h"
#include <iostream>
using namespace std;
void InsertAtHead(Node*& Head, int Value)
{
    Node* n = new Node(Value);
    n -> Next = Head;
    Head = n;
}
void InsertAfterNode(Node*& Head, int Key, int Value)
{
    Node* n = new Node(Value);
    if (Key == Head -> Element)
    {
        n -> Next = Head -> Next;
        Head -> Next = n;
        return;
    }

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
void InsertAtEnd(Node*& Head, int Value)
{
    Node* n = new Node(Value);
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
void DeleteNode(Node** Head, int Key)
{
    Node *Temp = *Head;
    Node *Prev;
    if (Temp != nullptr && Temp -> Element == Key)
    {
        *Head = Temp -> Next;
        free(Temp);
        return;
    }
    while (Temp != nullptr && Temp -> Element != Key)
    {
        Prev = Temp;
        Temp = Temp -> Next;
    }
    if (Temp == nullptr)
    {
        return;
    }
    Prev -> Next = Temp -> Next;
    free(Temp);
}
bool SearchNode(Node* Current, int Key)
{
    while (Current != nullptr)
    {
        if (Current -> Element == Key)
        {
            return true;
        }
        Current = Current->Next;
    }
    return false;
}
int main()
{
    Node* Head = nullptr;
    InsertAtHead(Head, 1);
    InsertAfterNode(Head, 1, 2);
    InsertAfterNode(Head, 2, 3);
    InsertAfterNode(Head, 3, 4);
    InsertAtEnd(Head, 5);
    DeleteNode(&Head, 1);
    int TargetNumber;
    cout << "pleas enter the number you want to see if its in list or not : " << endl;
    cin >> TargetNumber;
    if (SearchNode(Head, TargetNumber))
    {
        cout << "The number is in th list" << endl;
    }
    else
    {
        cout << "The number is not on the list" << endl;
    }
    Node* Temp = Head;
    while (Temp != nullptr)
    {
        cout << Temp -> Element << ", ";
        Temp = Temp -> Next;
    }
}