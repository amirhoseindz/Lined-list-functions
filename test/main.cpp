#include "../include/ListsNode.h"
#include <iostream>
using namespace std;
int main()
{
    int Value;
    Node <int> List(Value);
    List.InsertAtHead(1);
    List.InsertAfterExistingNode(1, 2);
    List.InsertAfterExistingNode(2, 3);
    List.InsertAfterExistingNode(3, 4);
    List.InsertAtEnd(5);
    List.DeleteNode(1);
    List.Print();
    int TargetNumber;
    cout << endl << "pleas enter the number you want to see if its in list or not : " << endl;
    cin >> TargetNumber;
    if (List.SearchNode(TargetNumber))
    {
        cout << "The number is in th list" << endl;
    }
    else
    {
        cout << "The number is not on the list" << endl;
    }
    char Char;
    Node <char> List1(Char);
    List1.InsertAtHead('a');
    List1.InsertAfterExistingNode('a', 'b');
    List1.InsertAfterExistingNode('b', 'c');
    List1.InsertAfterExistingNode('c', 'd');
    List1.InsertAtEnd('e');
    List1.DeleteNode('c');
    List1.Print();
}