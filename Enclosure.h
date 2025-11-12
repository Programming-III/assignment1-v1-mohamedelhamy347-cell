#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

class Enclosure{
    Private:
    Enclosure*Animal;
    int capacity;
    int CurrentCount;
    public:
    Enclosure();
    Enclosure(Enclosure*Animal,int capacity, int CurrentCount);
    ~Enclosure(){
        delete Animal[];
    }
    void addAnimal(Animal*a);
    void displayAnimals();
    void getAnimal();
    void getCapacity();
    
}







#endif
