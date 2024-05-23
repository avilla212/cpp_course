#ifndef MYINTEGER_H
#define MYINTEGER_H

#include <iostream>

class MyInteger {

    // 
    friend std::ostream &operator<<(std::ostream &out, const MyInteger &myInt);
    friend std::istream &operator>>(std::istream &in, MyInteger &myInt);

    private: 
        int value;

    public:
        // Constructors
        MyInteger(int value = 0): value(value) {}

        MyInteger operator+(const MyInteger& other) const;
        MyInteger operator-(const MyInteger& other) const;
        MyInteger& operator+=(const MyInteger& other);
        MyInteger& operator-=(const MyInteger& other);
        bool operator<(const MyInteger& other) const;
        bool operator>(const MyInteger& other) const;

};

#endif