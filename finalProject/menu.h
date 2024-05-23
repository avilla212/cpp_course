#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>

using namespace std;

class MenuItem{

    public:
        MenuItem();
        MenuItem(string dish, double price, double cost);
        
        string getDish();
        double getPrice();
        double getCost();

        string toString();

    private:
        string dish;
        double price;
        double cost;

};

#endif