//
//  Plan.cpp
//  DataStructures
//
//  Created by Francisco Sanchez on 2/21/22.
//

#include <iostream>
#include "Plan.h"

std::ostream& operator<<(std::ostream& os, const Plan& obj)
{
    os << obj.name << std::endl;
    os << obj.goal << std::endl;
    os << obj.date << std::endl;
    return os;
}
