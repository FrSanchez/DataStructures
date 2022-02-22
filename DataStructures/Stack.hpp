//
//  stack.hpp
//  DataStructures
//
//  Created by Francisco Sanchez on 2/12/22.
//

#ifndef stack_hpp
#define stack_hpp

#include "Node.h"

class Stack
{
private:
    int size;
    Node* head;
    
    
public:
    Stack();
    ~Stack();
    void push(Node*);
    Node* pop();
    int getSize();
    
    friend std::ostream& operator<<(std::ostream& os, const Stack& obj);
};

#endif /* stack_hpp */
