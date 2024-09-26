#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal {
protected:
    int age;
    std::string type;

public:
    std::string name; 
    // Constructor
    Animal(const std::string& name, int age, const std::string& type);

    // Function to display animal information
    virtual void displayInfo() const;

    // Getter for type
    std::string getType() const;

    // Destructor
    virtual ~Animal() = default;
};

class Cat : public Animal {
protected:
    std::string breed;

public:
    // Constructor
    Cat(const std::string& name, int age, const std::string& breed);

    void displayInfo() const override;
};

class Dog : public Animal {
protected:
    std::string breed;

public:
    // Constructor
    Dog(const std::string& name, int age, const std::string& breed);

    void displayInfo() const override;
};

#endif // ANIMAL_H
