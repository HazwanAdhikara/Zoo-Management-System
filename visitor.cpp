#include "Visitor.h"

Visitor::Visitor(string name, int age, string ticketType, string entryTime)
    : name(name), age(age), ticketType(ticketType), entryTime(entryTime) {}

void Visitor::setName(string name) {
    this->name = name;
}

void Visitor::setAge(int age) {
    this->age = age;
}

void Visitor::setTicketType(string ticketType) {
    this->ticketType = ticketType;
}

void Visitor::setEntryTime(string entryTime) {
    this->entryTime = entryTime;
}

string Visitor::getName() const {
    return name;
}

int Visitor::getAge() const {
    return age;
}

string Visitor::getTicketType() const {
    return ticketType;
}

string Visitor::getEntryTime() const {
    return entryTime;
}

void Visitor::enterZoo() {
    cout << name << " has entered the zoo." << endl;
}

void Visitor::observeAnimals() {
    cout << name << " is observing the animals." << endl;
}

void Visitor::buySouvenirs() {
    cout << name << " is buying souvenirs." << endl;
}
