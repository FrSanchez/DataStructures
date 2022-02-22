//
//  Node.cpp
//  DataStructures
//
//  Created by Francisco Sanchez on 2/12/22.
//

#include <iostream>
#include "Node.h"


Node::Node(Plan pl)
{
    plan = pl;
    prev = nullptr;
    next = nullptr;
}

Node::~Node()
{
    std::cout << "Node delete " << plan.getName() << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Node& obj)
{
    os << obj.plan ;
    return os;
}
