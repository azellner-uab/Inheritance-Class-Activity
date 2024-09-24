/*
 * File: shelter.cpp
 * -----------------
 * This file implements the shelter.h interface.
 */
 
 #include "shelter.h"
 
 Shelter::Shelter(){
	 //probably not necessary but I don't want this to be empty??
	 //animals = std::vector<Animal*>;
 }
 
 Shelter::Shelter(std::vector<Animal*> animals){
	 this->animals = animals;
 }
 
 void Shelter::addAnimal(Animal* animal){
	 animals.push_back(animal);
 }
 
 void Shelter::removeAnimal(std::string name) {
	 for (int i = 0; i < animals.size(); i++){
		 Animal a = *(animals[i]);
		 if (a.name == name){
			 animals.erase(i);
			 std::cout << "Removed " << name << " from shelter list." << std::endl;
			 return;
		 }
	 }
	 std::cout << "Could not find animal " << name << " in shelter list." << std::endl;
	 return;
 }
 
 void Shelter::displayAnimals(){
	 int count = 1;
	 for (Animal* a : animals){
		 std::cout << count << ". " << std::endl;
		 a->displayInfo();
		 std::cout << "\n------------------------------------------------------------" << std::endl;
		count++;
	 }
 }
 