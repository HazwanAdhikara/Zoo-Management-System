#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>
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
    cout << "option 14 : Break for Employee \n";
    cout << "option 15 : Add Visitor \n";
    cout << "option 16 : Remove Visitor \n";
    cout << "option 17 : Search Visitor \n";
    cout << "option 18 : Sorting \n";
    cout << "option 0 : Exit \n";
}

bool compareByAge(Animal *a, Animal *b)
{
    return a->getAge() < b->getAge();
}

// Animals
void initializeAnimals(vector<Animal *> &animals)
{
    cout << "\n"
         << endl;
    animals.push_back(new Mammal("Lion", "Panthera leo", 8, "Male"));
    animals.push_back(new Mammal("Tiger", "Panthera tigris", 12, "Female"));
    animals.push_back(new Mammal("Elephant", "Elephas maximus", 10, "Male"));

    animals.push_back(new Bird("Indian Peafowl", "Pavo cristatus", 16, "Female"));
    animals.push_back(new Bird("Bald Eagle", "Haliaeetus leucocephalus", 22, "Male"));
    animals.push_back(new Bird("Flamingos", "Phoenicopteridae", 9, "Female"));

    animals.push_back(new Reptile("Green Iguana", "Iguana iguana", 15, "Male"));
    animals.push_back(new Reptile("Burmese Python", "Python bivittatus", 20, "Male"));
    animals.push_back(new Reptile("Aldabra Giant Tortoise", "Aldabrachelys gigantea", 11, "Male"));

    animals.push_back(new Fish("Whale Shark", "Rhincodon typus", 70, "Female"));
    animals.push_back(new Fish("Sturgeon", "Acipenseridae", 82, "Female"));
    animals.push_back(new Fish("Clownfish", "Amphiprioninae", 7, "Male"));

    animals.push_back(new Bug("Death's Head Cockroach", "Blaberus craniifer", 1, "Male"));
    animals.push_back(new Bug("Mexican Red-kneed Tarantula", "Brachypelma smithi", 28, "Female"));
    animals.push_back(new Bug("Leaf Cutter Ant", "Atta spp.", 14, "Female"));
}

void showAllAnimals(const vector<Animal *> &animals)
{
    if (animals.empty())
    {
        cout << "No animals in the zoo." << endl;
        return;
    }

    for (Animal *animal : animals)
    {
        cout << "> " << animal->getName() << " (" << animal->getAge() << " years old)" << endl;
        animal->eat();
        cout << "\n"
             << endl;
        animal->sleep();
        cout << "\n"
             << endl;
        animal->makeSound();
        cout << "\n"
             << endl;
    }
}

void addAnimal(vector<Animal *> &animals)
{
    string name, species, gender;
    int age, type;

    cout << "Enter animal type (1-Mammal, 2-Bird, 3-Reptile, 4-Fish, 5-Bug): ";
    cin >> type;
    cout << "Enter name: ";
    cin >> ws; // clear whitespace
    getline(cin, name);
    cout << "Enter species: ";
    getline(cin, species);
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter gender: ";
    cin >> ws;
    getline(cin, gender);

    switch (type)
    {
    case 1:
        animals.push_back(new Mammal(name, species, age, gender));
        break;
    case 2:
        animals.push_back(new Bird(name, species, age, gender));
        break;
    case 3:
        animals.push_back(new Reptile(name, species, age, gender));
        break;
    case 4:
        animals.push_back(new Fish(name, species, age, gender));
        break;
    case 5:
        animals.push_back(new Bug(name, species, age, gender));
        break;
    default:
        cout << "Invalid type!" << endl;
        return;
    }
    cout << "Animal added." << endl;
}

void removeAnimal(vector<Animal *> &animals)
{
    string name;
    cout << "Enter the name of the animal to remove: ";
    cin >> ws;
    getline(cin, name);

    auto it = remove_if(animals.begin(), animals.end(), [&](Animal *animal)
                        { return animal->getName() == name; });

    if (it != animals.end())
    {
        delete *it;
        animals.erase(it, animals.end());
        cout << "Animal removed." << endl;
    }
    else
    {
        cout << "Animal not found." << endl;
    }
}

void searchAnimal(const vector<Animal *> &animals)
{
    string name;
    cout << "Enter the name of the animal to search: ";
    cin >> ws;
    getline(cin, name);

    // Convert input name to lowercase for case-insensitive comparison
    transform(name.begin(), name.end(), name.begin(), ::tolower);

    vector<Animal *> matches;

    // Find all animals that match the search criteria
    for (Animal *animal : animals)
    {
        string animalName = animal->getName();
        transform(animalName.begin(), animalName.end(), animalName.begin(), ::tolower);

        if (animalName.find(name) != string::npos) // Check if input name is substring of animal's name
        {
            matches.push_back(animal);
        }
    }

    if (!matches.empty())
    {
        cout << "Animals found:" << endl;
        for (Animal *match : matches)
        {
            cout << match->getName() << " (" << match->getAge() << " years old)" << endl;
        }
    }
    else
    {
        cout << "Animal not found." << endl;
    }
}

void sortAnimal(const vector<Animal *> &animals)
{
    if (animals.empty())
    {
        cout << "No animals in the zoo." << endl;
        return;
    }
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
}

// Cages
void initializeCages(vector<Cage *> &cages)
{
    cout << "\n"
         << endl;
    cages.push_back(new MammalCage(1, 10));
    cages.push_back(new MammalCage(2, 20));
    cages.push_back(new MammalCage(3, 30));

    cages.push_back(new BirdCage(4, 25));
    cages.push_back(new BirdCage(5, 35));
    cages.push_back(new BirdCage(6, 45));

    cages.push_back(new ReptileCage(7, 4));
    cages.push_back(new ReptileCage(8, 8));
    cages.push_back(new ReptileCage(9, 12));

    cages.push_back(new FishCage(10, 80));
    cages.push_back(new FishCage(11, 100));
    cages.push_back(new FishCage(12, 120));

    cages.push_back(new BugCage(13, 55));
    cages.push_back(new BugCage(14, 70));
    cages.push_back(new BugCage(15, 150));
}

void showAllCages(const vector<Cage *> &cages)
{
    if (cages.empty())
    {
        cout << "No cages available." << endl;
        return;
    }
    for (const auto &cage : cages)
    {
        cout << "Cage Number: " << cage->getCageNumber() << ", Type: " << cage->getAnimalType() << ", Capacity: " << cage->getCapacity() << ", Animals Count: " << cage->getAnimalCount() << endl;
        cage->listAnimals();
    }
}

void addCage(vector<Cage *> &cages)
{
    int cageNumber, capacity;
    string animalType;

    cout << "Enter cage number: ";
    cin >> cageNumber;
    cout << "Enter animal type: ";
    cin >> ws;
    getline(cin, animalType);
    cout << "Enter capacity: ";
    cin >> capacity;

    cages.push_back(new Cage(cageNumber, capacity, animalType));
}

void removeCage(vector<Cage *> &cages)
{
    int cageNumber;
    cout << "Enter the cage number to remove: ";
    cin >> cageNumber;

    auto it = remove_if(cages.begin(), cages.end(), [cageNumber](Cage *cage)
                        {
        if (cage->getCageNumber() == cageNumber) {
            delete cage;
            return true;
        }
        return false; });

    if (it != cages.end())
    {
        cages.erase(it, cages.end());
        cout << "Cage " << cageNumber << " removed." << endl;
    }
    else
    {
        cout << "Cage " << cageNumber << " not found." << endl;
    }
}

void searchCage(const vector<Cage *> &cages)
{
    int cageNumber;
    cout << "Enter the cage number to search: ";
    cin >> cageNumber;

    auto it = find_if(cages.begin(), cages.end(), [cageNumber](Cage *cage)
                      { return cage->getCageNumber() == cageNumber; });

    if (it != cages.end())
    {
        cout << "Cage found: " << "Cage Number: " << (*it)->getCageNumber() << ", Type: " << (*it)->getAnimalType() << ", Capacity: " << (*it)->getCapacity() << ", Animals Count: " << (*it)->getAnimalCount() << endl;
        (*it)->listAnimals();
    }
    else
    {
        cout << "Cage not found." << endl;
    }
}

// Employees
void initializeEmployees(vector<unique_ptr<employee>> &employees)
{
    cout << "\n"
         << endl;
    employees.push_back(unique_ptr<employee>(new Zookeeper("Alice", 1, "Zookeeper", "30000", "Day")));
    employees.push_back(unique_ptr<employee>(new Veterinarian("Bob", 2, "Veterinarian", "50000", "Night")));
    employees.push_back(unique_ptr<employee>(new Manager("Charlie", 3, "Manager", "70000", "Day")));
}

void showAllEmployees(const vector<unique_ptr<employee>>& employees) {
    if (employees.empty()) {
        cout << "No employees in the zoo." << endl;
        return;
    }

    for (const auto& emp : employees) {
        cout << "> " << emp->getName() << " (" << emp->getPosition() << ")" << endl;
        emp->work();
        if (emp->isOnBreak()) {
            cout << " -> is taking a break" << endl;
        }
        cout << endl;
    }
}

void chooseEmployeesForBreak(vector<unique_ptr<employee>>& employees) {
    int count;
    cout << "Enter the number of employees to take a break: ";
    cin >> count;

    if (count <= 0 || count > employees.size()) {
        cout << "Invalid number of employees." << endl;
        return;
    }

    cout << "Select " << count << " employees for a break:" << endl;
    for (size_t i = 0; i < count; ++i) {
        int index;
        cout << i + 1 << ". Enter the index of employee: ";
        cin >> index;

        if (index >= 1 && index <= employees.size()) {
            employees[index - 1]->takeBreak();
        } else {
            cout << "Invalid index." << endl;
            --i;
        }
    }
}

void addEmployee(vector<unique_ptr<employee>> &employees)
{
    string name, position, shift, salary;
    int employeeID, type;

    cout << "Enter employee type (1-Zookeeper, 2-Veterinarian, 3-Manager): ";
    cin >> type;
    cout << "Enter name: ";
    cin >> ws;
    getline(cin, name);
    cout << "Enter employee ID: ";
    cin >> employeeID;
    cout << "Enter position: ";
    cin >> ws;
    getline(cin, position);
    cout << "Enter salary: ";
    cin >> ws;
    getline(cin, salary);
    cout << "Enter shift: ";
    cin >> ws;
    getline(cin, shift);

    switch (type)
    {
    case 1:
        employees.push_back(unique_ptr<employee>(new Zookeeper(name, employeeID, position, salary, shift)));
        break;
    case 2:
        employees.push_back(unique_ptr<employee>(new Veterinarian(name, employeeID, position, salary, shift)));
        break;
    case 3:
        employees.push_back(unique_ptr<employee>(new Manager(name, employeeID, position, salary, shift)));
        break;
    default:
        cout << "Invalid type!" << endl;
        return;
    }
    cout << "Employee added." << endl;
}

void removeEmployee(vector<unique_ptr<employee>> &employees)
{
    int employeeID;
    cout << "Enter the employee ID to remove: ";
    cin >> employeeID;

    auto it = remove_if(employees.begin(), employees.end(), [&](const unique_ptr<employee> &emp)
                        { return emp->getEmployeeID() == employeeID; });

    if (it != employees.end())
    {
        employees.erase(it, employees.end());
        cout << "Employee removed." << endl;
    }
    else
    {
        cout << "Employee not found." << endl;
    }
}

void searchEmployee(const vector<unique_ptr<employee>> &employees)
{
    int employeeID;
    cout << "Enter the employee ID to search: ";
    cin >> employeeID;

    auto it = find_if(employees.begin(), employees.end(), [&](const unique_ptr<employee> &emp)
                      { return emp->getEmployeeID() == employeeID; });

    if (it != employees.end())
    {
        cout << "Employee found: " << (*it)->getDetails() << endl;
    }
    else
    {
        cout << "Employee not found." << endl;
    }
}

void initializeVisitors(std::vector<Visitor *> &visitors)
{
    visitors.push_back(new ChildVisitor("Alice", 8, "Child Ticket", "09:00"));
    visitors.push_back(new ChildVisitor("Bob", 7, "Child Ticket", "09:30"));
    visitors.push_back(new AdultVisitor("Charlie", 35, "Adult Ticket", "10:00"));
    visitors.push_back(new AdultVisitor("Diana", 40, "Adult Ticket", "10:30"));
}

void showAllVisitors(const std::vector<Visitor *> &visitors)
{
    if (visitors.empty())
    {
        std::cout << "No visitors in the zoo." << std::endl;
        return;
    }

    for (const Visitor *visitor : visitors)
    {
        std::cout << "Name: " << visitor->getName() << "\nAge: " << visitor->getAge()
                  << "\nTicket Type: " << visitor->getTicketType() << "\nEntry Time: " << visitor->getEntryTime() << std::endl;
        visitor->enterZoo();
        visitor->observeAnimals();
        visitor->buySouvenirs();
        std::cout << std::endl;
    }
}

// Function to add a new visitor
void addVisitor(std::vector<Visitor *> &visitors)
{
    std::string name, ticketType, entryTime;
    int age;

    std::cout << "Enter name: ";
    std::cin >> std::ws;
    std::getline(std::cin, name);
    std::cout << "Enter age: ";
    std::cin >> age;
    std::cout << "Enter ticket type: ";
    std::cin >> std::ws;
    std::getline(std::cin, ticketType);
    std::cout << "Enter entry time: ";
    std::getline(std::cin, entryTime);

    // Prompt for type of visitor
    int visitorType;
    std::cout << "Enter visitor type (1-Child, 2-Adult): ";
    std::cin >> visitorType;

    Visitor *visitor;
    if (visitorType == 1)
    {
        visitor = new ChildVisitor(name, age, ticketType, entryTime);
    }
    else if (visitorType == 2)
    {
        visitor = new AdultVisitor(name, age, ticketType, entryTime);
    }
    else
    {
        std::cout << "Invalid visitor type!" << std::endl;
        return;
    }

    visitors.push_back(visitor);
    std::cout << "Visitor added." << std::endl;
}

// Function to remove a visitor by name
void removeVisitor(std::vector<Visitor *> &visitors)
{
    std::string name;
    std::cout << "Enter the name of the visitor to remove: ";
    std::cin >> std::ws;
    std::getline(std::cin, name);

    auto it = std::remove_if(visitors.begin(), visitors.end(), [&](Visitor *visitor)
                             { return visitor->getName() == name; });

    if (it != visitors.end())
    {
        delete *it;
        visitors.erase(it);
        std::cout << "Visitor removed." << std::endl;
    }
    else
    {
        std::cout << "Visitor not found." << std::endl;
    }
}

// Function to search for a visitor by name
void searchVisitor(std::vector<Visitor *> &visitors)
{
    std::string name;
    std::cout << "Enter the name of the visitor to search: ";
    std::cin >> std::ws;
    std::getline(std::cin, name);

    bool found = false;
    for (Visitor *visitor : visitors)
    {
        if (visitor->getName() == name)
        {
            std::cout << "Visitor found:" << std::endl;
            std::cout << "Name: " << visitor->getName() << "\nAge: " << visitor->getAge()
                      << "\nTicket Type: " << visitor->getTicketType() << "\nEntry Time: " << visitor->getEntryTime() << std::endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        std::cout << "Visitor not found." << std::endl;
    }
}



int main()
{
    vector<Animal *> animals;
    vector<Cage *> cages;
    vector<unique_ptr<employee>> employees;
    vector<Visitor *> visitors;

    initializeAnimals(animals);
    initializeCages(cages);
    initializeEmployees(employees);
    initializeVisitors(visitors);

    while (true)
    {
        menu();
        int option;
        cout << "Enter your option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            showAllAnimals(animals);
            break;
        case 2:
            showAllCages(cages);
            break;
        case 3:
            showAllEmployees(employees);
            break;
        case 4:
            showAllVisitors(visitors);
            break;
        case 5:
            addAnimal(animals);
            break;
        case 6:
            removeAnimal(animals);
            break;
        case 7:
            searchAnimal(animals);
            break;
        case 8:
            addCage(cages);
            break;
        case 9:
            removeCage(cages);
            break;
        case 10:
            searchCage(cages);
            break;
        case 11:
            addEmployee(employees);
            break;
        case 12:
            removeEmployee(employees);
            break;
        case 13:
            searchEmployee(employees);
            break;
        case 14:
            chooseEmployeesForBreak(employees);
            break;
        case 15:
            addVisitor(visitors);
            break;
        case 16:
            removeVisitor(visitors);
            break;
        case 17:
            searchVisitor(visitors);
            break;
        case 18:
            sort(animals.begin(), animals.end(), compareByAge);
            sortAnimal(animals);
            break;
        case 0:
            for (Animal *animal : animals)
            {
                delete animal;
            }
            for (Cage *cage : cages)
            {
                delete cage;
            }
            return 0;
        default:
            cout << "Invalid option!" << endl;
        }
    }

    return 0;
}
