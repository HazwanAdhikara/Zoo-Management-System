#include "employee.h"
#include <iostream>

using namespace std;

employee::employee(const string &name, int employeeID, const string &position, double salary, const string &shift)
    : name(name), employeeID(employeeID), position(position), salary(salary), shift(shift) {}

employee::~employee() {}

string employee::getName() const {
    return name;
}

void employee::setName(const string &name) {
    this->name = name;
}

int employee::getEmployeeID() const {
    return employeeID;
}

void employee::setEmployeeID(int employeeID) {
    this->employeeID = employeeID;
}

string employee::getPosition() const {
    return position;
}

void employee::setPosition(const string &position) {
    this->position = position;
}

double employee::getSalary() const {
    return salary;
}

void employee::setSalary(double salary) {
    this->salary = salary;
}

string employee::getShift() const {
    return shift;
}

void employee::setShift(const string &shift) {
    this->shift = shift;
}

void employee::work() const {
    cout << name << " is working as " << position << "." << endl;
}

string employee::getDetails() const {
    return "Name: " + name + "\nID: " + to_string(employeeID) + "\nPosition: " + position + "\nSalary: " + to_string(salary) + "\nShift: " + shift;
}

void employee::takeBreak() const {
    cout << name << " is taking a break." << endl;
}
