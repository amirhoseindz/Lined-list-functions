#include <iostream>
using namespace std;
template <class T>
class Node
{
protected:
    T _Element;
public :
    Node* _Next = nullptr;
    Node (T Member)
    {
        _Element = Member;
    }
    T GetElementValue()
    {
        return _Element;
    }
};