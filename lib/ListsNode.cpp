#include "../include/ListsNode.h"
Node :: Node (int Value)
{
    Element = Value;
    Next = nullptr;
}
void Node :: InsertAtHead(Node*& Head, int Value)
{
    Node* n = new Node(Value);
    n -> Next = Head;
    Head = n;
}
void Node :: InsertAfterExistingNode(Node*& Head, int Key, int Value)
{
    Node* n = new Node(Value);
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
void Node :: InsertAtEnd(Node*& Head, int Value)
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
void Node :: DeleteNode(Node** Head, int Key)
{
    Node *Temp = *Head;
    Node *FirstElement = *Head;
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
        *Head = Temp -> Next;
    }
    else
    {
        Prev -> Next = Temp -> Next;
    }
    free(Temp);
}
bool Node :: SearchNode(Node* Current, int Key)
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