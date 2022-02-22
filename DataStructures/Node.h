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
    Node(Plan);
    ~Node();
    
    friend std::ostream& operator<<(std::ostream& os, const Node& obj);
};


#endif /* Node_h */
