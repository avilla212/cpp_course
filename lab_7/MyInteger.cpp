#include "MyInteger.h"

MyInteger MyInteger::operator+(const MyInteger& other) const {
    return MyInteger(value + other.value);
}

MyInteger MyInteger::operator-(const MyInteger& other) const {
    return MyInteger(value - other.value);
}

MyInteger& MyInteger::operator+=(const MyInteger& other) {
    value += other.value;
    return *this;
}

MyInteger& MyInteger::operator-=(const MyInteger& other) {
    value -= other.value;
    return *this;
}

bool MyInteger::operator<(const MyInteger& other) const {
    return value < other.value;
}

bool MyInteger::operator>(const MyInteger& other) const {
    return value > other.value;
}

std::ostream& operator<<(std::ostream& out, const MyInteger& obj) {
    out << obj.value;
    return out;
}

std::istream& operator>>(std::istream& in, MyInteger& obj) {
    in >> obj.value;
    return in;
}