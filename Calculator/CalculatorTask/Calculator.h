#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator
{
public:
    Calculator();
    int add(int num1, int num2);
    int sub(int num1, int num2);
    int mul(int num1, int num2);
    int div(int num1, int num2);
    int mod(int num1,  int num2);

private:
    int m_num1;
    int m_num2;
};

#endif // CALCULATOR_H
