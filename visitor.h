#ifndef VISITOR_H
#define VISITOR_H

#include <iostream>
#include <string>

using namespace std;

class Visitor
{
private:
    string name;
    int age;
    string ticketType;
    string entryTime;

public:
    // Constructor
    Visitor(string name, int age, string ticketType, string entryTime);

    // Setter methods
    void setName(string name);
    void setAge(int age);
    void setTicketType(string ticketType);
    void setEntryTime(string entryTime);

    // Getter methods
    string getName();
    int getAge();
    string getTicketType();
    string getEntryTime();

    // Other methods
    void enterZoo();
    void observeAnimals();
    void buySouvenirs();
};

#endif