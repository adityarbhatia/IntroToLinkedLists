#include <iostream>
#include <cstdlib>
#include "List.h"

using namespace std;

int main()
{   
    List classObject;   //Object declaration for Class List
    int entry;          //Number entry for selecting an option
    int Num_Data;       //Number to add or delete from the linked list
    
    while(1)
    {
        cout << "To add, select [1]\n To delete, select [2] \n To Print, select [3]\n";
        cout << "Entry: ";
        cin >> entry;
        
        switch(entry)
        {
            case 1:
                cout << "Enter the number you want to add: ";
                cin >> Num_Data;
                classObject.addNode(Num_Data);
                break;
            case 2:
                cout << "Enter the number you want to delete: ";
                cin >> Num_Data;
                classObject.DeleteNode(Num_Data);
                break;
            case 3:
                classObject.PrintList();
                break;
        }
    }
    return 0;
}
