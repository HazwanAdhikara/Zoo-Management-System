#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal
{
private:
    std::string name;
    std::string species;
    int age;
    std::string gender;

public:
    Animal(std::string name, std::string species, int age, std::string gender);
    void setName(std::string name);
    std::string getName();
    virtual void eat();
    virtual void sleep();
    virtual void makeSound();
};

class Mammal : public Animal
{
public:
    Mammal(std::string name, std::string species, int age, std::string gender);
    void eat() override;
    void sleep() override;
    void makeSound() override;
};

class Bird : public Animal
{
public:
    Bird(std::string name, std::string species, int age, std::string gender);
    void eat() override;
    void sleep() override;
    void makeSound() override;
};

class Reptile : public Animal
{
public:
    Reptile(std::string name, std::string species, int age, std::string gender);
    void eat() override;
    void sleep() override;
    void makeSound() override;
};

class Fish : public Animal
{
public:
    Fish(std::string name, std::string species, int age, std::string gender);
    void eat() override;
    void sleep() override;
    void makeSound() override;
};

class Bug : public Animal
{
public:
    Bug(std::string name, std::string species, int age, std::string gender);
    void eat() override;
    void sleep() override;
    void makeSound() override;
};

#endif
