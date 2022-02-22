//
//  Plan.h
//  DataStructures
//
//  Created by Francisco Sanchez on 2/21/22.
//

#ifndef Plan_h
#define Plan_h

#include <string>
using namespace std;

class Plan {
private:
    string name;
    string goal;
    string date;
public:
    string getName() { return name;}
    string getGoal() { return goal;}
    string getDate() { return date;}
    void setName(string n) { name = n;}
    void setGoal(string g) { goal = g;}
    void setDate(string d) { date = d;}
    
    Plan() : name("") , goal(""), date("") {}
    Plan(string n,string g ,string d) : name(n), goal(g), date(d) {}
    
    friend std::ostream& operator<<(std::ostream& os, const Plan& obj);
};

#endif /* Plan_h */
