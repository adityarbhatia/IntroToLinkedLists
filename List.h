#include <iostream>
#ifndef LIST_H
#define LIST_H

class List{
    typedef struct node{
    int data;
    node* next;
}nodeptr;

    nodeptr head;
    nodeptr curr;
    nodeptr temp;
    
    
public:
    List();
    void addNode(int addData);
    void DeleteNode(int delData);
    void PrintList();
    
};



#endif /* LIST_H */
