//
//  stack.cpp
//  DataStructures
//
//  Created by Francisco Sanchez on 2/12/22.
//

#include <iostream>
#include "Stack.hpp"

Stack::Stack()
{
    head = nullptr;
    size = 0;
}

Stack::~Stack()
{
    while(size>0) {
        Node* curr = pop();
        if (curr) {
            delete(curr);
        }
    }
}

void Stack::push(Node *node)
{
    if (!head) {
        head = node;
    } else {
        Node* curr = head;
        while(curr->next) {
            curr=curr->next;
        }
        curr->next = node;
        node->prev = curr;
    }
    size++;
}

Node* Stack::pop()
{
    if (head) {
        Node* curr = head;
        head = head->next;
        size--;
        return curr;
    } else {
        return nullptr;
    }
}

std::ostream& operator<<(std::ostream& os, const Stack& obj)
{
      os << "Stack:" << obj.size;
      return os;
}
