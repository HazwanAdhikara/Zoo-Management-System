#include "employee.h"
#include <iostream>

using namespace std;

employee::employee(const string &name, int employeeID, const string &position, const string &salary, const string &shift)
    : name(name), employeeID(employeeID), position(position), salary(salary), shift(shift), onBreak(false) {}

employee::~employee() {}

string employee::getName() const
{
    return name;
}

void employee::setName(const string &name)
{
    this->name = name;
}

int employee::getEmployeeID() const
{
    return employeeID;
}

void employee::setEmployeeID(int employeeID)
{
    this->employeeID = employeeID;
}

string employee::getPosition() const
{
    return position;
}

void employee::setPosition(const string &position)
{
    this->position = position;
}

string employee::getSalary() const
{
    return salary;
}

string employee::getSalaryWithCurrency() const
{
    return "Rp " + salary;
}

void employee::setSalary(const string &salary)
{
    this->salary = salary;
}

string employee::getShift() const
{
    return shift;
}

void employee::setShift(const string &shift)
{
    this->shift = shift;
}

void employee::work() const
{
    cout << name << " (with " << getSalaryWithCurrency() << " salary) is working as " << position << " and feeding the animals." << endl;
}

string employee::getDetails() const
{
    return "Name: " + name + "\nID: " + to_string(employeeID) + "\nPosition: " + position + "\nSalary: " + getSalaryWithCurrency() + "\nShift: " + shift;
}

void employee::takeBreak()
{
    onBreak = true;
}

bool employee::isOnBreak() const
{
    return onBreak;
}

// Implementasi class Zookeeper (tidak perlu diubah dari sebelumnya)
Zookeeper::Zookeeper(const string &name, int employeeID, const string &position, const string &salary, const string &shift)
    : employee(name, employeeID, position, salary, shift) {}

void Zookeeper::feedAnimal() const
{
    cout << name << " is feeding the animals." << endl;
}

void Zookeeper::work() const
{
    cout << name << " (with " << getSalaryWithCurrency() << " salary) is working as a " << position << " and feeding the animals." << endl;
}

string Zookeeper::getDetails() const
{
    return employee::getDetails() + "\nRole: Zookeeper";
}

// Implementasi class Manager (tidak perlu diubah dari sebelumnya)
Manager::Manager(const string &name, int employeeID, const string &position, const string &salary, const string &shift)
    : employee(name, employeeID, position, salary, shift) {}

void Manager::manageStaff() const
{
    cout << name << " is managing the staff." << endl;
}

void Manager::work() const
{
    cout << name << " (with " << getSalaryWithCurrency() << " salary) is working as a " << position << " and managing the staff." << endl;
}

string Manager::getDetails() const
{
    return employee::getDetails() + "\nRole: Manager";
}

// Implementasi class Veterinarian (tidak perlu diubah dari sebelumnya)
Veterinarian::Veterinarian(const string &name, int employeeID, const string &position, const string &salary, const string &shift)
    : employee(name, employeeID, position, salary, shift) {}

void Veterinarian::treatAnimal() const
{
    cout << name << " is treating the animals." << endl;
}

void Veterinarian::work() const
{
    cout << name << " (with " << getSalaryWithCurrency() << " salary) is working as a " << position << " and treating the animals" << endl;
}

string Veterinarian::getDetails() const
{
    return employee::getDetails() + "\nRole: Veterinarian";
}
