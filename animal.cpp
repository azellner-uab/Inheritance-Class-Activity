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
