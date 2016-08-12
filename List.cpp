#include <cstdlib>
#include <iostream>

#include "List.h"

using namespace std;

List :: List()
{
    head = NULL;
    curr = NULL;
    temp = NULL;
    
}

void List::addNode(int addData)
{
    nodeptr n = new node;
    n->next = NULL;
    n->data = addData;
    
    if(head != NULL)
    {
        curr = head;
        while(curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = n;
    }
    else
    {
        head = n;
    }
}

void List ::DeleteNode(int delData) 
{
    nodeptr delptr = NULL;
    temp = head;
    curr = head;
    while(curr != NULL && curr->data != delData)
    {
        temp = curr;
        curr = curr->next;
    }
    if(curr == NULL)
    {
        cout << delData << " was not found in the list\n";
        delete delptr;
    }
    else
    {
        delptr = curr;
        curr = curr->next;
        temp->next = curr;
        if(delptr = head)
        {
            head = head->next;
            temp = NULL;
        }
        delete delptr;
        cout << " The value " << delptr << " was deleted!";
    }
}

void List :: PrintList()
{
    temp = head;
    curr = head;
    
    while(curr != NULL)
    {
        cout << curr->data << endl;
        curr = curr->next;
    }
}
