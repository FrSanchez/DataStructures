//
//  main.cpp
//  DataStructures
//
//  Created by Francisco Sanchez on 2/12/22.
//

#include <iostream>
#include <fstream>
#include <iostream>
#include <string>
#include <map>
#include <random>
#include "Stack.hpp"
#include "LinkedList.h"
using namespace std;

string random_string(std::size_t length)
{
    const std::string CHARACTERS = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    std::random_device random_device;
    std::mt19937 generator(random_device());
    std::uniform_int_distribution<> distribution(0, CHARACTERS.size() - 1);

    std::string random_string;

    for (std::size_t i = 0; i < length; ++i)
    {
        random_string += CHARACTERS[distribution(generator)];
    }

    return random_string;
}
 
// Main() function: where the execution of program begins
int main()
{
    LinkedList list;
    ifstream myFile;
    myFile.open("Plans.txt", ios::in);
    if (myFile.is_open()) {
        string temp;
        do {
            if (!myFile.eof()) {
//                Plan* plan = new Plan();
//                myFile >> *plan;
//                Node* node = new Node(*plan);
//                list.add(node);
                Node* node = new Node();
                list.add(node);
                myFile >> *node;
            }
        } while(getline(myFile, temp) );
    }
    
    std::cout << "List Size: " << list.getSize() << std::endl;
    std::cout << list << std::endl;
    return 0;
}
