#include "animal.h"
using namespace std;

// Implementasi class Animal
Animal::Animal(string name, string species, int age, string gender)
    : name(name), species(species), age(age), gender(gender) {}

void Animal::setName(const string &name)
{
    this->name = name;
}

string Animal::getName() const
{
    return this->name;
}

string Animal::getSpecies() const
{
    return this->species;
}

string Animal::getGender() const
{
    return this->gender;
}
int Animal::getAge() const
{
    return this->age;
}

void Animal::eat()
{
    cout << "Eating Food" << endl;
}

void Animal::sleep()
{
    cout << "Sleeping" << endl;
}

void Animal::makeSound()
{
    cout << "Making Sound" << endl;
}

// Implementasi class Mammal
Mammal::Mammal(string name, string species, int age, string gender)
    : Animal(name, species, age, gender) {}

void Mammal::eat()
{
    cout << "What do they eat?\nSome groups of mammals almost exclusively eat meat, Other mammals such as deer, cows and antelope are predominantly plant-eaters, living on a diet of leaves, shoots, fruits and bark" << endl;
}

void Mammal::sleep()
{
    cout << "How long do they sleep?\nDifferent mammals sleep different amounts. Some, such as bats, sleep 18–20 hours per day, while others, including giraffes, sleep only 3–4 hours per day. There can be big differences even between closely related species." << endl;
}

void Mammal::makeSound()
{
    cout << "What sound do they make?\nMammals communicate with a wide variety of sounds, from barks and meows to roars and chirps." << endl;
}

// Implementasi class Bird
Bird::Bird(string name, string species, int age, string gender)
    : Animal(name, species, age, gender) {}

void Bird::eat()
{
    cout << "What do they eat?\nSome eat seeds, berries, fruit, insects, other birds, eggs, small mammals, fish, buds, larvae, aquatic invertebrates, acorns and other nuts, aquatic vegetation, grain, dead animals, garbage, and much more" << endl;
}

void Bird::sleep()
{
    cout << "How long do they sleep?\nOn land, the birds can sleep as much as 12 hours per day, but they usually get less than an hour of sleep per day while soaring over the ocean." << endl;
}

void Bird::makeSound()
{
    cout << "What sound do they make?\nBirds make tons of different sounds: chirps, rattles, whistles, trills, croaks, drumming, and many many more." << endl;
}

// Implementasi class Reptile
Reptile::Reptile(string name, string species, int age, string gender)
    : Animal(name, species, age, gender) {}

void Reptile::eat()
{
    cout << "What do they eat?\nMost reptiles are carnivores which means they eat other animals including insects, rodents, other reptiles and larger mammals. Perhaps the most obvious carnivorous reptile would be a crocodile! Crocodiles, as the largest reptiles, can eat mammals like zebra, deer and even people." << endl;
}

void Reptile::sleep()
{
    cout << "How long do they sleep?\nThey generally sleep in smaller chunks, about 4-7 hours each night, in addition to spending much of the say resting. Tortoises, on the other hand, sleep for much longer. Some species, such as the Galapagos Tortoise, sleep between 16 and 18 hours a day!" << endl;
}

void Reptile::makeSound()
{
    cout << "What sound do they make?\nHissing is a lizard noise that can be made by a wider selection of species. They use this sound to communicate discomfort and fear. The reptiles usually keep their teeth bared after making the noise in an attempt to intimidate. Other species can emit squealing sounds or low growls as defense mechanisms." << endl;
}

// Implementasi class Fish
Fish::Fish(string name, string species, int age, string gender)
    : Animal(name, species, age, gender) {}

void Fish::eat()
{
    cout << "What do they eat?\nFish generally eat other fish but their diet can also consist of eggs, algae, plants, crustaceans, worms, mollusks, insects, insect larvae, amphibians, and plankton. River fish are opportunistic feeders and their diet can vary depending on what is available in their environment." << endl;
}

void Fish::sleep()
{
    cout << "How long do they sleep?\nResearch indicates fish rest on similar schedules to humans by remaining active during the day and resting at night. There are some species of fish, like catfish and knife fish, that are nocturnal, Aqueon says. There's also evidence fish don't sleep during every phase of their life." << endl;
}

void Fish::makeSound()
{
    cout << "What sound do they make?\nAlong with snapping shrimps, spine-rattling urchins and orchestral whales, many species of fish contribute to the cacophony of underwater sound – grunting, clicking, honking, groaning, burping and even grinding their teeth for many reasons." << endl;
}

// Implementasi class Bug
Bug::Bug(string name, string species, int age, string gender)
    : Animal(name, species, age, gender) {}

void Bug::eat()
{
    cout << "What do they eat?\nSome insects eat grass and leaves. Other insects each mushy food like soft, decaying garbage. Still other types of insects eat only liquids. Many insects such as mosquitos, bees, and butterflies siphon their food."
         << endl;
}

void Bug::sleep()
{
    cout << "How long do they sleep?\nThey just do it a little differently than we do. Most insects are either active only during the day or only at night. When they're not active, they rest."
         << endl;
}

void Bug::makeSound()
{
    cout << "What sound do they make?\nTheir vibrating wings make a buzzing sound. Other insects make sounds when they are sitting still. They rub or vibrate different body parts to make sound. One of the most common insect sounds is the chirping of a male cricket."
         << endl;
}

// Implementasi fungsi makeAnimalEat, makeAnimalSleep, makeAnimalSound
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
