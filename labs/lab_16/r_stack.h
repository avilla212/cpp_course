#ifndef R_STACK_H
#define R_STACK_H

#include <vector>
#include <iostream>

template <typename T = int>

class r_stack {

    public:
        // Default constructor
        r_stack() {};

        r_stack(size_t size){
            stack.reserve(size);
        }

        void insert(const T& value){
            stack.push_back(value);
        }

        void remove(){
            if(!stack.empty()){
                stack.pop_back();
            } else {
                std::cout << "Stack is empty" << std::endl;
            }
        }

        void print() const {
            for (auto it = stack.rbegin(); it != stack.rend(); ++it){
                std::cout << *it << " ";
            }
        }
    private:
        std::vector<T> stack;
};

#endif