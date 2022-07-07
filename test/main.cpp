#include "../include/ListsNode.h"
#include <iostream>
using namespace std;
int main()
{
    Node* List;
    Node* ListsHead = nullptr;
    List->InsertAtHead(ListsHead, 1);
    List->InsertAfterExistingNode(ListsHead, 1, 2);
    List->InsertAfterExistingNode(ListsHead, 2, 3);
    List->InsertAfterExistingNode(ListsHead, 3, 4);
    List->InsertAtEnd(ListsHead, 5);
    List->DeleteNode(&ListsHead, 1);
    int TargetNumber;
    cout << "pleas enter the number you want to see if its in list or not : " << endl;
    cin >> TargetNumber;
    if (List->SearchNode(ListsHead, TargetNumber))
    {
        cout << "The number is in th list" << endl;
    }
    else
    {
        cout << "The number is not on the list" << endl;
    }
    Node* Temp = ListsHead;
    while (Temp != nullptr)
    {
        cout << Temp -> Element << ", ";
        Temp = Temp -> Next;
    }
}