#include "Dog.h"

// Constructor implementation
Dog::Dog(const std::string& name, int age, const std::string& breed)
    : Animal(name, age, "Dog"), breed(breed) {}

void Dog::displayInfo() const {
    Animal::displayInfo(); // Call base class method
    std::cout << "Breed: " << breed << std::endl;
}
