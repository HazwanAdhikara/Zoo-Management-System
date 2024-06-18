#ifndef VISITOR_H
#define VISITOR_H

#include <iostream>
#include <string>

using namespace std;

class Visitor {
private:
    string name;
    int age;
    string ticketType;
    string entryTime;

public:
    Visitor(string name, int age, string ticketType, string entryTime);

    void setName(string name);
    void setAge(int age);
    void setTicketType(string ticketType);
    void setEntryTime(string entryTime);

    string getName() const;
    int getAge() const;
    string getTicketType() const;
    string getEntryTime() const;

    void enterZoo();
    void observeAnimals();
    void buySouvenirs();
};

#endif
