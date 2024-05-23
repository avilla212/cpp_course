#include "menu.h"

#include <iostream>
#include <string>

MenuItem::MenuItem(){
    dish = "";
    price = 0.0;
    cost = 0.0;
}

MenuItem::MenuItem(string dish, double price, double cost){
    this->dish = dish;
    this->price = price;
    this->cost = cost;
}

string MenuItem::getDish(){
    return dish;
}

double MenuItem::getPrice(){
    return price;
}

double MenuItem::getCost(){
    return cost;
}

string MenuItem::toString(){
    string menuItem = dish + " $"  + " $" + to_string(price);

    return menuItem;
}

