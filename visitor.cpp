#include "visitor.h"

// Implementation for base Visitor
Visitor::Visitor(std::string name, int age, std::string ticketType, std::string entryTime)
    : name(name), age(age), ticketType(ticketType), entryTime(entryTime) {}

void Visitor::setName(std::string name)
{
    this->name = name;
}

void Visitor::setAge(int age)
{
    this->age = age;
}

void Visitor::setTicketType(std::string ticketType)
{
    this->ticketType = ticketType;
}

void Visitor::setEntryTime(std::string entryTime)
{
    this->entryTime = entryTime;
}

std::string Visitor::getName() const
{
    return name;
}

int Visitor::getAge() const
{
    return age;
}

std::string Visitor::getTicketType() const
{
    return ticketType;
}

std::string Visitor::getEntryTime() const
{
    return entryTime;
}

void Visitor::enterZoo() const
{
    std::cout << name << " has entered the zoo." << std::endl;
}

void Visitor::observeAnimals() const
{
    std::cout << name << " is observing the animals." << std::endl;
}

void Visitor::buySouvenirs() const
{
    std::cout << name << " is buying souvenirs." << std::endl;
}

// Implementation for ChildVisitor
ChildVisitor::ChildVisitor(std::string name, int age, std::string ticketType, std::string entryTime)
    : Visitor(name, age, ticketType, entryTime) {}

void ChildVisitor::enterZoo() const
{
    std::cout << name << " (Child) has entered the zoo via child pass." << std::endl;
}

void ChildVisitor::observeAnimals() const
{
    std::cout << name << " (Child) is observing the animals far away." << std::endl;
}

void ChildVisitor::buySouvenirs() const
{
    std::cout << name << " (Child) is buying lolipop." << std::endl;
}

// Implementation for AdultVisitor
AdultVisitor::AdultVisitor(std::string name, int age, std::string ticketType, std::string entryTime)
    : Visitor(name, age, ticketType, entryTime) {}

void AdultVisitor::enterZoo() const
{
    std::cout << name << " (Adult) has entered the zoo." << std::endl;
}

void AdultVisitor::observeAnimals() const
{
    std::cout << name << " (Adult) is observing the animals." << std::endl;
}

void AdultVisitor::buySouvenirs() const
{
    std::cout << name << " (Adult) is buying souvenirs." << std::endl;
}
