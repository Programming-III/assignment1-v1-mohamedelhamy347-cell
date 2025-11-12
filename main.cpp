#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


Class Animal{
    private string name;
    private int age;
    private bool isHungry;
    Animal::Animal(){
        name="";
        age=0;
        isHungry=false;
    }
      Animal::Animal(string name, int age, bool isHungry){
          this->name=name;
          this->age=age;
          this->isHungry=isHungry;
      }  
      void Animal::getname(){
          return name;
      }
      void Animal::getage(){
          return age;
          
      }
      void Animal::getisHungry(){
          return isHungry;
      }
        void Animal:: display(){
            cout<<"Animal name:"<<getName();
            cout<<"his age :"<< getage();
            cout<<"Hungry Statut"<< getisHungry();
        }
        void Animal::feed(){
            if(getisHungry()==false){
                cout<<"Animal is not Hungry";
                else
                cout<<"Animal is Hungry";
            }
        }
        Class Mammal::Animal{
            private string furColor;
            Mammal()::public Animal(){
                string furColor="";
            }
            Mammal(String furColor)::Animal(string name, int age, bool isHungry){
                this->furColor=furColor; 
            }
        }
        
        Class Bird:: Animal{
            float wingSpan;
            Bird()::Public Animal(){
                wingSpan=0.0;
                
            }
            Bird(float wingSpan)::Animal(string name, int age, bool isHungry){
                this->wingSpan=wingSpan;
            }
            
            Class Reptile:: PublicAnimal{
                private bool isVenomous;
                Reptile::Public Animal(){
                    isVenomous= false;
    	Reptile(bool isVenomous)::Animal(string name, int age, bool isHungry){
    	    this->isVenomous=isVenomous;
    	}
                }
            }
            
            
            
            
            
            
            
            
            
            
            
            
            
            
 Class Enclosure{
 Private:
    Enclosure*Animal;
    int capacity;
    int CurrentCount;
    Enclosure(){
        Animal=0;
        capacity=0;
        CurrentCount=0;
    }
    Enclosure(Enclosure*Animal,int capacity, int CurrentCount){
        this->Animal=Animal;
        this->capacity=capacity;
        this->CurrentCount=CurrentCount;
    }
    void Enclosure::addAnimal(Animal*a){
        Enclosure*Animal = new Enclosure[capacity+a];
    }
    void Enclosure::getAnimal(){
        return Animal;
    }
    void Enclosure:: displayAnimals(){
        cout<< "All animals are"<<getAnimal();
    }
            }
            
          Class Vistor{
              
private:
    string visitorName;
    int ticketsBought;
              Vistor::Vistor(){
                  visitorName="";
                  ticketsBought=0;
                  Vistor::Visitor(string visitorName,int ticketsBought){
                      this->visitorName=visitorName;
                      this->ticketsBought=ticketsBought;
                      void ::Visitor getvisitorName(){
                          return visitorName;
                      }
                      void ::Visitor getticketsBought(){
                          return ticketsBought;
                      
                  }
                  void ::Visitor display(){
                      cout<<"Visitor Name :"<<getvisitorName();
                      cout<<"Number ticketsBought:"<<getticketsBought();
                  }
              }
          }  
            
            
            
            
            
            
            
            
            
            
            
            
            
            
        }
    }
    
    
    
    
    
}
int main()
{
    Lion(Age:5,Hungry);
    Parrot(Age;2, Not Hungry);
    Snake(Age:3,Venomous, Hungry);
    name:Sarah ali;
    Tickets Bought: 3;
    
}
    
    return 0;
}
