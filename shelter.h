/*
 * File: shelter.h
 * ---------------
 * This interface exports the Shelter class, which manages a collection of
 * Animal pointers.
 */
#ifndef _shelter_h
#define _shelter_h

#include <vector>
#include <iostream>
#include <string>

#include "animal.h"
//Are these necessary?
#include "dog.h"
#include "cat.h"

class Shelter {
	public:
	/*
	 * Constructor: Shelter
	 * Usage:	Shelter shelter;
	 *			Shelter shelter(animals);
	 * ----------------------------------
	 * Creates a Shelter object. The default constructor creates an empty Shelter;
	 * the second constructor creates a Shelter with a vector of Animals to adopt.
	 */
		Shelter();
		Shelter(std::vector<Animal*> animals);
	
	/*
	 * Method: addAnimal
	 * Usage: shelter.addAnimal(animal);
	 * ---------------------------------
	 * Adds a pointer to an Animal object to the vector of animals at the shelter.
	 */
		void addAnimal(Animal* animal);
	
	/*
	 * Method: removeAnimal
	 * Usage: shelter.removeAnimal(name);
	 * ----------------------------------
	 * Removes an animal from the Shelter's list by name.
	 */
		void removeAnimal(std::string name);
	
	/*
	 * Method: displayAnimals
	 * Usage: shelter.displayAnimals();
	 * --------------------------------
	 * Displays all animals in the shelter by printing to the console.
	 */
		void displayAnimals();
	
	private:
	std::vector<Animal*> animals; /* The list of animals at the shelter */
};

#endif