#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include "animal.h"
#include "cage.h"
#include "employee.h"
#include "visitor.h"

using namespace std;

void menu()
{
    cout << "\n";
    cout << "> Here are the things that you could do < \n";
    cout << "option 1 : Show all Animals \n";
    cout << "option 2 : Show all Cage \n";
    cout << "option 3 : Show all Employee \n";
    cout << "option 4 : Show all Visitor \n";
    cout << "option 5 : Add Animal \n";
    cout << "option 6 : Remove Animal \n";
    cout << "option 7 : Search Animal \n";
    cout << "option 8 : Add Cage \n";
    cout << "option 9 : Remove Cage \n";
    cout << "option 10 : Search Cage \n";
    cout << "option 11 : Add Employee \n";
    cout << "option 12 : Remove Employee \n";
    cout << "option 13 : Search Employee \n";
    cout << "option 14 : Add Visitor \n";
    cout << "option 15 : Remove Visitor \n";
    cout << "option 16 : Search Visitor \n";
    cout << "option 17 : Sorting \n";
    cout << "option 0 : Exit \n";
}

bool compareByAge(Animal *a, Animal *b)
{
    return a->getAge() < b->getAge();
}

int main()
{
    vector<Animal *> animals;

    // Create Mammal objects
    animals.push_back(new Mammal("> Lion", "Panthera leo", 8, "Male"));
    animals.push_back(new Mammal("> Tiger", "Panthera tigris", 12, "Female"));
    animals.push_back(new Mammal("> Elephant", "Elephas maximus", 10, "Male"));

    // Create Bird objects
    animals.push_back(new Bird("> Indian Peafowl", "Pavo cristatus", 16, "Female"));
    animals.push_back(new Bird("> Bald Eagle", "Haliaeetus leucocephalus", 22, "Male"));
    animals.push_back(new Bird("> Flamingos", "Phoenicopteridae", 9, "Female"));

    // Create Reptile objects
    animals.push_back(new Reptile("> Green Iguana", "Iguana iguana", 15, "Male"));
    animals.push_back(new Reptile("> Burmese Python", "Python bivittatus", 20, "Male"));
    animals.push_back(new Reptile("> Aldabra Giant Tortoise", "Aldabrachelys gigantea", 11, "Male"));

    // Create Fish objects
    animals.push_back(new Fish("> Whale Shark", "Rhincodon typus", 70, "Female"));
    animals.push_back(new Fish("> Sturgeon", "Acipenseridae", 82, "Female"));
    animals.push_back(new Fish("> Clownfish", "Amphiprioninae", 7, "Male"));

    // Create Bug objects
    animals.push_back(new Bug("> Death's Head Cockroach", "Blaberus craniifer", 1, "Male"));
    animals.push_back(new Bug("> Mexican Red-kneed Tarantula", "Brachypelma smithi", 28, "Female"));
    animals.push_back(new Bug("> Leaf Cutter Ant", "Atta spp.", 14, "Female"));

    // Sorting animals by age
    sort(animals.begin(), animals.end(), compareByAge);

    // Display sorted animals by age
    for (Animal *animal : animals)
    {
        cout << animal->getName() << " (" << animal->getAge() << " years old)" << endl;
        animal->eat();
        cout << "\n"
             << endl;
        animal->sleep();
        cout << "\n"
             << endl;
        animal->makeSound();
        cout << "\n"
             << endl;
        cout << endl;
    }

    // Clean up dynamically allocated memory
    for (Animal *animal : animals)
    {
        delete animal;
    }

    return 0;
}