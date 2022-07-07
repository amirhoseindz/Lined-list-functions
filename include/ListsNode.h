#include <iostream>
class Node
{
public :
    int Element;
    Node* Next;
    Node (int Value);
    static void InsertAtHead(Node*& Head, int Value);
    static void InsertAfterExistingNode(Node*& Head, int Key, int Value);
    static void InsertAtEnd(Node*& Head, int Value);
    static void DeleteNode(Node** Head, int Key);
    static bool SearchNode(Node* Current, int Key);
};