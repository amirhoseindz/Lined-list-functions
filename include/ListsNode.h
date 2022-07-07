#include <iostream>
class Node
{
public :
    int Element;
    Node* Next;
    Node* Head;
    Node (int Value);
    void InsertAtHead(int Value);
    void InsertAfterExistingNode(int Key, int Value) const;
    void InsertAtEnd(int Value);
    static void DeleteNode(Node** Head, int Key);
    bool SearchNode(int Key);
};