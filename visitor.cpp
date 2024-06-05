#include "Visitor.h"

// Constructor
Visitor::Visitor(string name, int age, string ticketType, string entryTime)
{
    this->name = name;
    this->age = age;
    this->ticketType = ticketType;
    this->entryTime = entryTime;
}

// Setter methods
void Visitor::setName(string name)
{
    this->name = name;
}

void Visitor::setAge(int age)
{
    this->age = age;
}

void Visitor::setTicketType(string ticketType)
{
    this->ticketType = ticketType;
}

void Visitor::setEntryTime(string entryTime)
{
    this->entryTime = entryTime;
}

// Getter methods
string Visitor::getName()
{
    return name;
}

int Visitor::getAge()
{
    return age;
}

string Visitor::getTicketType()
{
    return ticketType;
}

string Visitor::getEntryTime()
{
    return entryTime;
}

// Other methods
void Visitor::enterZoo()
{
    cout << name << " has entered the zoo." << endl;
}

void Visitor::observeAnimals()
{
    cout << name << " is observing the animals." << endl;
}

void Visitor::buySouvenirs()
{
    cout << name << " is buying souvenirs." << endl;
}
