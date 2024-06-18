#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class employee
{
protected:
    std::string name;
    int employeeID;
    std::string position;
    std::string salary;  // Changed to string
    std::string shift;
    bool onBreak;  // New member variable to track break status

public:
    employee(const std::string &name, int employeeID, const std::string &position, const std::string &salary, const std::string &shift);
    virtual ~employee();

    std::string getName() const;
    void setName(const std::string &name);

    int getEmployeeID() const;
    void setEmployeeID(int employeeID);

    std::string getPosition() const;
    void setPosition(const std::string &position);

    std::string getSalary() const;
    void setSalary(const std::string &salary);

    std::string getSalaryWithCurrency() const;

    std::string getShift() const;
    void setShift(const std::string &shift);

    virtual void work() const;
    virtual std::string getDetails() const;

    // Method to take a break
    void takeBreak();

    // Method to check if the employee is on break
    bool isOnBreak() const;
};

class Zookeeper : public employee
{
public:
    Zookeeper(const std::string &name, int employeeID, const std::string &position, const std::string &salary, const std::string &shift);
    void feedAnimal() const;
    void work() const override;
    std::string getDetails() const override;
};

class Manager : public employee
{
public:
    Manager(const std::string &name, int employeeID, const std::string &position, const std::string &salary, const std::string &shift);
    void manageStaff() const;
    void work() const override;
    std::string getDetails() const override;
};

class Veterinarian : public employee
{
public:
    Veterinarian(const std::string &name, int employeeID, const std::string &position, const std::string &salary, const std::string &shift);
    void treatAnimal() const;
    void work() const override;
    std::string getDetails() const override;
};

#endif // EMPLOYEE_H
