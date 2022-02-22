//
//  LinkedList.cpp
//  DataStructures
//
//  Created by Francisco Sanchez on 2/21/22.
//

#include "LinkedList.h"

LinkedList::LinkedList() : head(nullptr), size(0), last(nullptr){
}

LinkedList::~LinkedList() {
    Node* curr = head;
    Node* next;
    while(curr != nullptr) {
        next = curr->next;
        delete(curr);
        curr = next;
    }
}
void LinkedList::add(Node* node) {
    if (head == nullptr) {
        insert(node);
    } else {
        last->next = node;
        last = node;
    }
}

void LinkedList::remove(Node* node) {
    if (nullptr == node) return;
    if (node == head) {
        head = node->next;
    } else {
        if (last == node) {
            last = last->prev;
        } else {
            node->prev->next = node->next;
        }
    }
    delete(node);
    size--;
}

void LinkedList::remove(unsigned int nthNode) {
    Node* curr = head;

    if (nthNode == 0) {
        remove(head);
    } else {
        while(nthNode > 1 && curr != nullptr) {
            curr = curr->next;
            nthNode--;
        }
        delete(curr);
    }
}

void LinkedList::insert(Node* node){
    if (nullptr == node) return;
    node->next = head;
    head = node;
    if (last == nullptr) {
        last = node;
    }
    size++;
}

std::ostream& operator<<(std::ostream& os, const LinkedList& obj)
{
    Node* curr = obj.head;
    int first = 0;
    while (curr != nullptr) {
        string next = (first) ? "-> " : "";
        os << next << curr->getData();
        curr = curr->next;
        first = 1;
    }
    return os;
}
