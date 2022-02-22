//
//  Plan.cpp
//  DataStructures
//
//  Created by Francisco Sanchez on 2/21/22.
//

#include <iostream>
#include "Plan.h"

std::ostream& operator<<(std::ostream& os, Plan& obj)
{
    os << obj.name << std::endl;
    os << obj.goal << std::endl;
    os << obj.date << std::endl;
    return os;
}

std::istream& operator >>(std::istream &is, Plan &obj)
{
    string line;
    is >> line;
    obj.name = line;
    is >> line;
    obj.goal = line;
    is >> line;
    obj.date = line;
    return is;
}
