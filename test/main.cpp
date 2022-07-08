#include "../include/ListsNode.h"
#include <iostream>
using namespace std;
int main()
{
    List <int> MyList;
    MyList.InsertAtHead(1);
    MyList.InsertAfterExistingNode(1, 2);
    MyList.InsertAfterExistingNode(2, 3);
    MyList.InsertAfterExistingNode(3, 4);
    MyList.InsertAtEnd(5);
    MyList.DeleteNode(1);
    MyList.Print();
    int TargetNumber;
    cout << endl << "pleas enter the number you want to see if its in list or not : " << endl;
    cin >> TargetNumber;
    if (MyList.SearchNode(TargetNumber))
    {
        cout << "The number is in th list" << endl;
    }
    else
    {
        cout << "The number is not on the list" << endl;
    }
    List <char> MyList1;
    MyList1.InsertAtHead('a');
    MyList1.InsertAfterExistingNode('a', 'b');
    MyList1.InsertAfterExistingNode('b', 'c');
    MyList1.InsertAfterExistingNode('c', 'd');
    MyList1.InsertAtEnd('e');
    MyList1.DeleteNode('c');
    MyList1.Print();
}