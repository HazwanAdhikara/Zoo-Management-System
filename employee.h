#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <vector>

using namespace std;

class employee {
protected:
    string name;
    int employeeID;
    string position;
    double salary;
    string shift;

public:
    employee(const string &name, int employeeID, const string &position, double salary, const string &shift);

    virtual ~employee();

    string getName() const;
    void setName(const string &name);

    int getEmployeeID() const;
    void setEmployeeID(int employeeID);

    string getPosition() const;
    void setPosition(const string &position);

    double getSalary() const;
    void setSalary(double salary);

    string getShift() const;
    void setShift(const string &shift);

    virtual void work() const;
    virtual string getDetails() const;

    virtual void takeBreak() const;
};

#endif // EMPLOYEE_H
