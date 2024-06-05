#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

// Base class
class Employee
{
public:
    // Constructor
    Employee(std::string name, int age, std::string position, double salary);

    // Methods
    virtual void work();
    void takeBreak();
    double getSalary();

    // Setters
    void setName(std::string name);
    void setAge(int age);
    void setPosition(std::string position);
    void setSalary(double salary);

    // Getters
    std::string getName();
    int getAge();
    std::string getPosition();

protected:
    std::string name;
    int age;
    std::string position;
    double salary;
};

// Derived classes
class Zookeeper : public Employee
{
public:
    Zookeeper(std::string name, int age, std::string position, double salary);

    // Additional methods specific to Zookeeper
    void feedAnimals();
};

class Veterinarian : public Employee
{
public:
    Veterinarian(std::string name, int age, std::string position, double salary);

    // Additional methods specific to Veterinarian
    void treatAnimal();
};

class Cashier : public Employee
{
public:
    Cashier(std::string name, int age, std::string position, double salary);

    // Additional methods specific to Cashier
    void processPayment();
};

#endif // EMPLOYEE_H