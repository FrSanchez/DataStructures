//
//  Node.h
//  DataStructures
//
//  Created by Francisco Sanchez on 2/12/22.
//

#ifndef Node_h
#define Node_h

#include "Plan.h"
#include <string>
class Node
{
private:
    Plan plan;

public:
    Node* next;
    Node* prev;
    
    Plan getData() { return plan; }
    Node() : next(nullptr), prev(nullptr) {};
    Node(Plan p) : plan(p), next(nullptr), prev(nullptr) {};
    ~Node();
    void setPlan(Plan p) { plan = p;}
    
    friend std::ostream& operator<<(std::ostream& os, const Node& obj);
    friend std::istream& operator >>(std::istream &is, Node &obj);
};


#endif /* Node_h */
