#include "Animal.h"

// Constructor implementation
Animal::Animal(const std::string& name, int age, const std::string& type)
    : name(name), age(age), type(type) {}

void Animal::displayInfo() const {
    std::cout << "Name: " << name << "\n"
              << "Age: " << age << "\n"
              << "Type: " << type << std::endl;
}

std::string Animal::getType() const {
    return type;
}

// Constructor implementation for Cat class
Cat::Cat(const std::string& name, int age, const std::string& breed)
    : Animal(name, age, "Cat"), breed(breed) {}

void Cat::displayInfo() const {
    Animal::displayInfo(); // Call base class method
    std::cout << "Breed: " << breed << std::endl;
}

// Constructor implementation for Dog class
Dog::Dog(const std::string& name, int age, const std::string& breed)
    : Animal(name, age, "Dog"), breed(breed) {}

void Dog::displayInfo() const {
    Animal::displayInfo(); // Call base class method
    std::cout << "Breed: " << breed << std::endl;
}
