//
//  Node.cpp
//  DataStructures
//
//  Created by Francisco Sanchez on 2/12/22.
//

#include <iostream>
#include "Node.h"


Node::~Node()
{
    std::cout << "Node delete " << plan.getName() << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Node& obj)
{
    os << obj.plan ;
    return os;
}

std::istream& operator >>(std::istream &is, Node &obj) {
    is >> obj.plan;
    return is;
}
