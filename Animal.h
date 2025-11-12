#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;
Class Animal{
    private string name;
    private int age;
    private bool isHungry;
    public:
    Animal();
    Animal(string name, int age, bool isHungry);
    ~Animal();
    void display();
    void feed();
    void getname();
    void getage();
    void getisHungry();
}




#endif
