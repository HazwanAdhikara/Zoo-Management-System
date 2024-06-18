#include "cage.h"
#include <iostream>

Cage::Cage(int cageNumber, int capacity, const string &animalType)
    : cageNumber(cageNumber), capacity(capacity), animalType(animalType) {}

Cage::~Cage()
{
    for (auto animal : animals)
    {
        delete animal;
    }
}

bool Cage::addAnimal(Animal *animal)
{
    if (animals.size() >= capacity)
    {
        cout << "Cage is full!" << endl;
        return false;
    }
    animals.push_back(animal);
    return true;
}

bool Cage::removeAnimal(const string &name)
{
    for (auto it = animals.begin(); it != animals.end(); ++it)
    {
        if ((*it)->getName() == name)
        {
            delete *it;
            animals.erase(it);
            return true;
        }
    }
    cout << "Animal not found!" << endl;
    return false;
}

void Cage::cleanCage() const
{
    cout << "Cleaning cage..." << endl;
}

int Cage::getCageNumber() const { return cageNumber; }
int Cage::getCapacity() const { return capacity; }
string Cage::getAnimalType() const { return animalType; }
int Cage::getAnimalCount() const { return animals.size(); }

void Cage::listAnimals() const
{
    if (animals.empty())
    {
        cout << "No animals in this cage." << endl;
        return;
    }
    for (const auto &animal : animals)
    {
        cout << "Name: " << animal->getName() << ", Species: " << animal->getSpecies() << ", Age: " << animal->getAge() << ", Gender: " << animal->getGender() << endl;
    }
}

// MammalCage class implementation
MammalCage::MammalCage(int cageNumber, int capacity)
    : Cage(cageNumber, capacity, "Mammal") {}

bool MammalCage::addAnimal(Animal *animal)
{
    if (animal->getSpecies() == "Mammal")
    {
        return Cage::addAnimal(animal);
    }
    else
    {
        cout << "Only mammals are allowed in this cage!" << endl;
        return false;
    }
}

void MammalCage::cleanCage() const
{
    cout << "Cleaning the mammal cage..." << endl;
}

// BirdCage class implementation
BirdCage::BirdCage(int cageNumber, int capacity)
    : Cage(cageNumber, capacity, "Bird") {}

bool BirdCage::addAnimal(Animal *animal)
{
    if (animal->getSpecies() == "Bird")
    {
        return Cage::addAnimal(animal);
    }
    else
    {
        cout << "Only birds are allowed in this cage!" << endl;
        return false;
    }
}

void BirdCage::cleanCage() const
{
    cout << "Cleaning the bird cage..." << endl;
}

// ReptileCage class implementation
ReptileCage::ReptileCage(int cageNumber, int capacity)
    : Cage(cageNumber, capacity, "Reptile") {}

bool ReptileCage::addAnimal(Animal *animal)
{
    if (animal->getSpecies() == "Reptile")
    {
        return Cage::addAnimal(animal);
    }
    else
    {
        cout << "Only reptiles are allowed in this cage!" << endl;
        return false;
    }
}

void ReptileCage::cleanCage() const
{
    cout << "Cleaning the reptile cage..." << endl;
}

// FishCage class implementation
FishCage::FishCage(int cageNumber, int capacity)
    : Cage(cageNumber, capacity, "Fish") {}

bool FishCage::addAnimal(Animal *animal)
{
    if (animal->getSpecies() == "Fish")
    {
        return Cage::addAnimal(animal);
    }
    else
    {
        cout << "Only fish are allowed in this cage!" << endl;
        return false;
    }
}

void FishCage::cleanCage() const
{
    cout << "Cleaning the fish cage..." << endl;
}

// BugCage class implementation
BugCage::BugCage(int cageNumber, int capacity)
    : Cage(cageNumber, capacity, "Bug") {}

bool BugCage::addAnimal(Animal *animal)
{
    if (animal->getSpecies() == "Bug")
    {
        return Cage::addAnimal(animal);
    }
    else
    {
        cout << "Only bugs are allowed in this cage!" << endl;
        return false;
    }
}

void BugCage::cleanCage() const
{
    cout << "Cleaning the bug cage..." << endl;
}
