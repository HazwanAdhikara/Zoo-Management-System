#include "employee.h"
#include <iostream>

using namespace std;

// Employee class implementation

Employee::Employee(string name, int age, string position, double salary)
{
    this->name = name;
    this->age = age;
    this->position = position;
    this->salary = salary;
}

void Employee::work()
{
    cout << "Working..." << endl;
}

void Employee::takeBreak()
{
    cout << "Taking a break..." << endl;
}

double Employee::getSalary()
{
    return salary;
}

void Employee::setName(string name)
{
    this->name = name;
}

void Employee::setAge(int age)
{
    this->age = age;
}

void Employee::setPosition(string position)
{
    this->position = position;
}

void Employee::setSalary(double salary)
{
    this->salary = salary;
}

string Employee::getName()
{
    return name;
}

int Employee::getAge()
{
    return age;
}

string Employee::getPosition()
{
    return position;
}

// Zookeeper class implementation

Zookeeper::Zookeeper(string name, int age, string position, double salary)
    : Employee(name, age, position, salary) {}

void Zookeeper::feedAnimals()
{
    cout << "Feeding animals..." << endl;
}

// Veterinarian class implementation

Veterinarian::Veterinarian(string name, int age, string position, double salary)
    : Employee(name, age, position, salary) {}

void Veterinarian::treatAnimal()
{
    cout << "Treating an animal..." << endl;
}

// Cashier class implementation

Cashier::Cashier(string name, int age, string position, double salary)
    : Employee(name, age, position, salary) {}

void Cashier::processPayment()
{
    cout << "Processing payment..." << endl;
}