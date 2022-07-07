#include "../include/ListsNode.h"
Node :: Node (int Value)
{
    Element = Value;
    Next = nullptr;
}
void Node :: InsertAtHead(int Value)
{
    Node* n = new Node(Value);
    n -> Next = Head;
    Head = n;
}
void Node :: InsertAfterExistingNode(int Key, int Value) const
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
void Node :: InsertAtEnd(int Value)
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
void Node :: DeleteNode(int Key)
{
    Node *Temp = *&Head;
    Node *FirstElement = *&Head;
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
bool Node :: SearchNode(int Key)
{
    while (Head != nullptr)
    {
        if (Head -> Element == Key)
        {
            return true;
        }
        Head = Head->Next;
    }
    return false;
}