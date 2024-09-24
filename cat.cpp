#include "Cat.h"

// Constructor implementation
Cat::Cat(const std::string& name, int age, const std::string& breed)
    : Animal(name, age, "Cat"), breed(breed) {}

void Cat::displayInfo() const {
    Animal::displayInfo(); // Call base class method
    std::cout << "Breed: " << breed << std::endl;
}
