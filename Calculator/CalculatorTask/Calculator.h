#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator
{
public:
    Calculator();
    ~Calculator();

    void add(int num1, int num2);
    void sub(int num1, int num2);
    void mul(int num1, int num2);
    void div(int num1, int num2);
    void mod(int num1,  int num2);

};

#endif // CALCULATOR_H
