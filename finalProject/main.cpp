#include <iostream>
#include "menu.h"

using namespace std;

int main(){

    MenuItem item1("Cheeseburger", 5.99, 2.50);
    MenuItem item2("Fries", 2.99, 1.00);

    cout << item1.toString() << endl;
    cout << item2.toString() << endl;

    return 0;
}