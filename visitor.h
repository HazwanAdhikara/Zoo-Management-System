#ifndef VISITOR_H
#define VISITOR_H

#include <iostream>
#include <string>

// Base Visitor class
class Visitor
{
protected:
    std::string name;
    int age;
    std::string ticketType;
    std::string entryTime;

public:
    Visitor(std::string name, int age, std::string ticketType, std::string entryTime);

    void setName(std::string name);
    void setAge(int age);
    void setTicketType(std::string ticketType);
    void setEntryTime(std::string entryTime);

    std::string getName() const;
    int getAge() const;
    std::string getTicketType() const;
    std::string getEntryTime() const;

    virtual void enterZoo() const;
    virtual void observeAnimals() const;
    virtual void buySouvenirs() const;
};

// (Inheritance) Child Visitor class
class ChildVisitor : public Visitor
{
public:
    ChildVisitor(std::string name, int age, std::string ticketType, std::string entryTime);

    void enterZoo() const override;
    void observeAnimals() const override;
    void buySouvenirs() const override;
};

// (Inheritance) Adult Visitor class
class AdultVisitor : public Visitor
{
public:
    AdultVisitor(std::string name, int age, std::string ticketType, std::string entryTime);

    void enterZoo() const override;
    void observeAnimals() const override;
    void buySouvenirs() const override;
};

#endif // VISITOR_H
