#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

Class Visitor{
    private:
    string visitorName;
    int ticketsBought;
    public:
    Visitor();
    Visitor(string visitorName,int ticketsBought);
    ~Visitor();
    void displayInfo();
    void getvisitorName();
    void getticketsBought();






#endif
