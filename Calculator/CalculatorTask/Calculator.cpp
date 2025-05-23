#include "Calculator.h"
#include<iostream>
using namespace std;

Calculator::Calculator()
{
    cout<<"Calculator Constructor"<<endl;
    cout<<"Calculator Destructor"<<endl;

}

Calculator::~Calculator()
{
    cout<<"Calculator Destructor"<<endl;
    cout<<"Calculator Destructor"<<endl;

}

void Calculator::add(int num1, int num2)
{
    cout<<"Sum = "<<num1 + num2<<endl;
}

void Calculator::sub(int num1, int num2)
{
    cout<<"Diff = "<<num1 - num2<<endl;
}

void Calculator::mul(int num1, int num2)
{
    cout<<"Product = "<<num1 * num2<<endl;
}

void Calculator::div(int num1, int num2)
{
    cout<<"Quotient = "<<num1 / num2<<endl;

}

void Calculator::mod(int num1, int num2)
{
    cout<<"Remainder = "<<num1 % num2<<endl;
    std::cout<<"Hello World!"<<std::endl;

}
