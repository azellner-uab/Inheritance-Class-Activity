#include "animal.h"

// Constructor implementation
Animal::Animal(const std::string& name, int age, const std::string& type)
    : name(name), age(age), type(type) {}

/* --------------------------------------------------------
 * Function: displayInfo
 * Usage: displayInfo()
 * --------------------------------------------------------
 * This function displays animal details like name, age and type. 
 * ---------------------------------------------------------
 */
void Animal::displayInfo() const {
    std::cout << "Name: " << name << "\n"
              << "Age: " << age << "\n"
              << "Type: " << type << std::endl;
}

/* --------------------------------------------------------
 * Function: getType
 * Usage: getType()
 * --------------------------------------------------------
 * This function returns the type of animal. 
 * ---------------------------------------------------------
 */
std::string Animal::getType() const {
    return type;
}

// Constructor implementation for Cat class
Cat::Cat(const std::string& name, int age, const std::string& breed)
    : Animal(name, age, "Cat"), breed(breed) {}

/* --------------------------------------------------------
 * Function: displayInfo
 * Usage: displayInfo()
 * --------------------------------------------------------
 * This function is called from Cat class object, it override Base class display function.
 * ---------------------------------------------------------
 */
void Cat::displayInfo() const {
    Animal::displayInfo(); // Call base class method
    std::cout << "Breed: " << breed << std::endl;
}

// Constructor implementation for Dog class
Dog::Dog(const std::string& name, int age, const std::string& breed)
    : Animal(name, age, "Dog"), breed(breed) {}

/* --------------------------------------------------------
 * Function: displayInfo
 * Usage: displayInfo()
 * --------------------------------------------------------
 * This function is called from Dog class object, it override Base class display function.
 * ---------------------------------------------------------
 */
void Dog::displayInfo() const {
    Animal::displayInfo(); // Call base class method
    std::cout << "Breed: " << breed << std::endl;
}

