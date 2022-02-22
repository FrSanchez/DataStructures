//
//  LinkedList.h
//  DataStructures
//
//  Created by Francisco Sanchez on 2/21/22.
//

#ifndef LinkedList_h
#define LinkedList_h

#include "Node.h"
class LinkedList
{
private:
    int size;
    Node* head;
    Node* last;
    
public:
    LinkedList();
    ~LinkedList();
    void add(Node*);
    void insert(Node*);
    void remove(Node*);
    void remove(unsigned int);
    int getSize() { return size; }
    
    friend std::ostream& operator<<(std::ostream& os, const LinkedList& obj);
};

#endif /* LinkedList_h */
