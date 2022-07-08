#include <iostream>
using namespace std;
template <class T>
class Node
{
protected:
    T Element;
    Node* Next;
public :
    Node (T Member)
    {
        Element = Member;
        Next = nullptr;
    }
};