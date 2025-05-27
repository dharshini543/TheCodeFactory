#include "Calculator.h"
#include <iostream>
using namespace std;

int main()
{
    Calculator calc;
    calc.add(20 , 10);
    calc.sub(30 , 10);
    calc.mul(10 , 10);
    calc.div(50 , 10);
    calc.mod(80 , 10);
    return 0;
}
