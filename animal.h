#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
    string name;
    string species;
    int age;
    string gender;

public:
    Animal(string name, string species, int age, string gender);
    virtual ~Animal() {}

    void setName(const string &name);
    string getName() const;
    int getAge() const;

    virtual void eat();
    virtual void sleep();
    virtual void makeSound();
};

class Mammal : public Animal
{
public:
    Mammal(string name, string species, int age, string gender);

    void eat() override;
    void sleep() override;
    void makeSound() override;
};

class Bird : public Animal
{
public:
    Bird(string name, string species, int age, string gender);

    void eat() override;
    void sleep() override;
    void makeSound() override;
};

class Reptile : public Animal
{
public:
    Reptile(string name, string species, int age, string gender);

    void eat() override;
    void sleep() override;
    void makeSound() override;
};

class Fish : public Animal
{
public:
    Fish(string name, string species, int age, string gender);

    void eat() override;
    void sleep() override;
    void makeSound() override;
};

class Bug : public Animal
{
public:
    Bug(string name, string species, int age, string gender);

    void eat() override;
    void sleep() override;
    void makeSound() override;
};

void makeAnimalEat(Animal &animal);
void makeAnimalSleep(Animal &animal);
void makeAnimalSound(Animal &animal);

#endif
