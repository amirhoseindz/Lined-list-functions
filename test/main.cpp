#include "../include/ListsNode.h"
#include <iostream>
using namespace std;
int main()
{
    Node* List;
    List->InsertAtHead(1);
    List->InsertAfterExistingNode(1, 2);
    List->InsertAfterExistingNode(2, 3);
    List->InsertAfterExistingNode(3, 4);
    List->InsertAtEnd(5);
    List->DeleteNode(&List -> Head, 1);
    int TargetNumber;
    Node* Temp = List -> Head;
    while (Temp != nullptr)
    {
        cout << Temp -> Element << ", ";
        Temp = Temp -> Next;
    }
    cout << endl << "pleas enter the number you want to see if its in list or not : " << endl;
    cin >> TargetNumber;
    if (List -> SearchNode(TargetNumber))
    {
        cout << "The number is in th list" << endl;
    }
    else
    {
        cout << "The number is not on the list" << endl;
    }
}