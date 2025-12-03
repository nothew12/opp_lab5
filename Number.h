#pragma once
#include <string>
#include <sstream>

class Number {
public:
    float full;
    double last;

    Number();
    Number(float f);
    Number(float f, double l);
    Number(const Number& other);

    void Read();
    void Display();
    std::string toString();

  
    Number operator+(const Number& other);
    Number operator-(const Number& other);
    bool operator==(const Number& other);
};

