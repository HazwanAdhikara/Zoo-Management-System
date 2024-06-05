#include <iostream>
#include <string>
#include "animal.h"

using namespace std;

// Class & Object
class Animal
{
    // Attribute / Property & Method / Behavior
private: // Encapsulation (Private and Public)
    string name;
    string species;
    int age;
    string gender;

public:
    // Constructor
    Animal(string name, string species, int age, string gender)
    {
        this->name = name;
        this->species = species;
        this->age = age;
        this->gender = gender;
    }

    // Setter & Getter
    void setName(string name)
    {
        this->name = name;
    }

    string getName()
    {
        return this->name;
    }

    virtual void eat()
    { // Abstraction
        cout << "Eating Food" << endl;
    }

    virtual void sleep()
    {
        cout << "Sleeping" << endl;
    }

    virtual void makeSound()
    {
        cout << "Making Sound" << endl;
    }
};

// Inheritance
class Mammal : public Animal
{
public:
    Mammal(string name, string species, int age, string gender) : Animal(name, species, age, gender) {}

    // Overriding
    void eat()
    {
        cout << "Some groups of mammals almost exclusively eat meat, Other mammals such as deer, cows and antelope are predominantly plant-eaters, living on a diet of leaves, shoots, fruits and bark" << endl;
    }

    void sleep()
    {
        cout << "Different mammals sleep different amounts. Some, such as bats, sleep 18–20 hours per day, while others, including giraffes, sleep only 3–4 hours per day. There can be big differences even between closely related species." << endl;
    }

    void makeSound()
    {
        cout << "Mammals communicate with a wide variety of sounds, from barks and meows to roars and chirps." << endl;
    }
};

class Bird : public Animal
{
public:
    Bird(string name, string species, int age, string gender) : Animal(name, species, age, gender) {}

    void eat()
    {
        cout << "Some eat seeds, berries, fruit, insects, other birds, eggs, small mammals, fish, buds, larvae, aquatic invertebrates, acorns and other nuts, aquatic vegetation, grain, dead animals, garbage, and much more" << endl;
    }

    void sleep()
    {
        cout << "On land, the birds can sleep as much as 12 hours per day, but they usually get less than an hour of sleep per day while soaring over the ocean." << endl;
    }

    void makeSound()
    {
        cout << "Birds make tons of different sounds: chirps, rattles, whistles, trills, croaks, drumming, and many many more." << endl;
    }
};

class Reptile : public Animal
{
public:
    Reptile(string name, string species, int age, string gender) : Animal(name, species, age, gender) {}

    void eat()
    {
        cout << "Most reptiles are carnivores which means they eat other animals including insects, rodents, other reptiles and larger mammals. Perhaps the most obvious carnivorous reptile would be a crocodile! Crocodiles, as the largest reptiles, can eat mammals like zebra, deer and even people." << endl;
    }

    void sleep()
    {
        cout << "They generally sleep in smaller chunks, about 4-7 hours each night, in addition to spending much of the say resting. Tortoises, on the other hand, sleep for much longer. Some species, such as the Galapagos Tortoise, sleep between 16 and 18 hours a day!" << endl;
    }

    void makeSound()
    {
        cout << "Hissing is a lizard noise that can be made by a wider selection of species. They use this sound to communicate discomfort and fear. The reptiles usually keep their teeth bared after making the noise in an attempt to intimidate. Other species can emit squealing sounds or low growls as defense mechanisms." << endl;
    }
};

class Fish : public Animal
{
public:
    Fish(string name, string species, int age, string gender) : Animal(name, species, age, gender) {}

    void eat()
    {
        cout << "Fish generally eat other fish but their diet can also consist of eggs, algae, plants, crustaceans, worms, mollusks, insects, insect larvae, amphibians, and plankton. River fish are opportunistic feeders and their diet can vary depending on what is available in their environment." << endl;
    }

    void sleep()
    {
        cout << "Research indicates fish rest on similar schedules to humans by remaining active during the day and resting at night. There are some species of fish, like catfish and knife fish, that are nocturnal, Aqueon says. There's also evidence fish don't sleep during every phase of their life." << endl;
    }

    void makeSound()
    {
        cout << "Along with snapping shrimps, spine-rattling urchins and orchestral whales, many species of fish contribute to the cacophony of underwater sound – grunting, clicking, honking, groaning, burping and even grinding their teeth for many reasons." << endl;
    }
};

class Bug : public Animal
{
public:
    Bug(string name, string species, int age, string gender) : Animal(name, species, age, gender) {}

    void eat()
    {
        cout << "Some insects eat grass and leaves. Other insects each mushy food like soft, decaying garbage. Still other types of insects eat only liquids. Many insects such as mosquitos, bees, and butterflies siphon their food." << endl;
    }

    void sleep()
    {
        cout << "They just do it a little differently than we do. Most insects are either active only during the day or only at night. When they're not active, they rest." << endl;
    }

    void makeSound()
    {
        cout << "Their vibrating wings make a buzzing sound. Other insects make sounds when they are sitting still. They rub or vibrate different body parts to make sound. One of the most common insect sounds is the chirping of a male cricket." << endl;
    }
};

// Polymorphism
void makeAnimalEat(Animal &animal)
{
    animal.eat();
}

void makeAnimalSleep(Animal &animal)
{
    animal.sleep();
}

void makeAnimalSound(Animal &animal)
{
    animal.makeSound();
}

int main()
{
    // Create Mammal objects
    Mammal lion("Lion", "Panthera leo", 8, "Male");
    Mammal tiger("Tiger", "Panthera tigris", 12, "Female");
    Mammal elephant("Elephant", "Elephas maximus", 10, "Male");

    // Call Mammal functions
    lion.eat();
    lion.sleep();
    lion.makeSound();
    tiger.eat();
    tiger.sleep();
    tiger.makeSound();
    elephant.eat();
    elephant.sleep();
    elephant.makeSound();

    // Create Bird objects
    Bird peafowl("Indian Peafowl", "Pavo cristatus", 16, "Female");
    Bird eagle("Bald Eagle", "Haliaeetus leucocephalus", 22, "Male");
    Bird flamingos("Flamingos", "Phoenicopteridae", 9, "Female");

    // Call Bird functions
    peafowl.eat();
    peafowl.sleep();
    peafowl.makeSound();
    eagle.eat();
    eagle.sleep();
    eagle.makeSound();
    flamingos.eat();
    flamingos.sleep();
    flamingos.makeSound();

    // Create Reptile objects
    Reptile iguana("Green Iguana", "Iguana iguana", 15, "Male");
    Reptile python("Burmese Python", "Python bivittatus", 20, "Male");
    Reptile tortoise("Aldabra Giant Tortoise", "Aldabrachelys gigantea", 11, "Male");

    // Call Reptile functions
    iguana.eat();
    iguana.sleep();
    iguana.makeSound();
    python.eat();
    python.sleep();
    python.makeSound();
    tortoise.eat();
    tortoise.sleep();
    tortoise.makeSound();

    // Create Fish objects
    Fish shark("Whale Shark", "Rhincodon typus", 70, "Female");
    Fish sturgeon("Sturgeon", "Acipenseridae", 82, "Female");
    Fish clownfish("Clownfish", "Amphiprioninae", 7, "Male");

    // Call Fish functions
    shark.eat();
    shark.sleep();
    shark.makeSound();
    sturgeon.eat();
    sturgeon.sleep();
    sturgeon.makeSound();
    clownfish.eat();
    clownfish.sleep();
    clownfish.makeSound();

    // Create Bug objects
    Bug cockroach("Death's Head Cockroach", "Blaberus craniifer", 1, "Male");
    Bug tarantula("Mexican Red-kneed Tarantula", "Brachypelma smithi", 28, "Female");
    Bug ant("Leaf Cutter Ant", "Atta spp.", 14, "Female");

    // Call Bug functions
    cockroach.eat();
    cockroach.sleep();
    cockroach.makeSound();
    tarantula.eat();
    tarantula.sleep();
    tarantula.makeSound();
    ant.eat();
    ant.sleep();
    ant.makeSound();

    return 0;
}
