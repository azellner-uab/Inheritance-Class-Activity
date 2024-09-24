#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;
    int age;
    std::string type;

public:
    // Constructor
    Animal(const std::string& name, int age, const std::string& type);

    // Function to display animal information
    virtual void displayInfo() const;

    // Getter for type
    std::string getType() const;

    // Destructor
    virtual ~Animal() = default;
};

#endif // ANIMAL_H
