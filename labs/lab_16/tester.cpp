#include "r_stack.h"

int main(){

    r_stack<int> stack;

    std::cout << "Enter 10 values to insert into the stack: ";
    for (int i = 0; i < 10; i++){
        int value;
        std::cin >> value;
        stack.insert(value);
    }

    std::cout << "\nStack in reverse order: ";
    stack.print();

    for (int i = 0; i < 3; i++){
        stack.remove();
    }

    std::cout << "\nStack in reverse order and with 3 values removed: ";
    stack.print();

    return 0;
}