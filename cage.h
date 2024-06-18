#ifndef CAGE_H
#define CAGE_H

#include <string>
#include <vector>
#include "animal.h"

using namespace std;

class Cage
{
protected:
    int cageNumber;
    int capacity;
    string animalType;
    vector<Animal *> animals;

public:
    Cage(int cageNumber, int capacity, const string &animalType);
    virtual ~Cage();

    virtual bool addAnimal(Animal *animal);
    virtual bool removeAnimal(const string &name);
    virtual void cleanCage() const;

    // Getter
    int getCageNumber() const;
    int getCapacity() const;
    string getAnimalType() const;
    int getAnimalCount() const;
    void listAnimals() const;
};

class MammalCage : public Cage
{
public:
    MammalCage(int cageNumber, int capacity);
    bool addAnimal(Animal *animal) override;
    void cleanCage() const override;
};

class BirdCage : public Cage
{
public:
    BirdCage(int cageNumber, int capacity);
    bool addAnimal(Animal *animal) override;
    void cleanCage() const override;
};

class ReptileCage : public Cage
{
public:
    ReptileCage(int cageNumber, int capacity);
    bool addAnimal(Animal *animal) override;
    void cleanCage() const override;
};

class FishCage : public Cage
{
public:
    FishCage(int cageNumber, int capacity);
    bool addAnimal(Animal *animal) override;
    void cleanCage() const override;
};

class BugCage : public Cage
{
public:
    BugCage(int cageNumber, int capacity);
    bool addAnimal(Animal *animal) override;
    void cleanCage() const override;
};

#endif
