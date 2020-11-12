#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Calculator {
    public:
        int inputOne;
        int inputTwo;
        string calcOperator;

        Calculator(int x, int y, string op) {
            inputOne = x;
            inputTwo = y;
            calcOperator = op;
        }

        
};