#include "Number.h"
#include <iostream>
#include <sstream>
using namespace std;

Number::Number() : full(0), last(0) {}
Number::Number(float f) : full(f), last(0) {}
Number::Number(float f, double l) : full(f), last(l) {}
Number::Number(const Number& other) : full(other.full), last(other.last) {}

void Number::Read() {
    cout << "Ввести цілу частину: ";
    cin >> full;
    cout << "Ввести дробову частину: ";
    cin >> last;
}

void Number::Display() {
    cout << "Ціла частина: " << full << " | Дробова частина: " << last << endl;
}

string Number::toString() {
    stringstream ss;
    ss << "Full: " << full << ", Last: " << last;
    return ss.str();
}

Number Number::operator+(const Number& other) {
    return Number(full + other.full, last + other.last);
}

Number Number::operator-(const Number& other) {
    return Number(full - other.full, last - other.last);
}

bool Number::operator==(const Number& other) {
    return full == other.full && last == other.last;
}
