//
// Created by dell on 11/27/2024.
//

#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
using namespace std;

class Calculator {
    public:
    static int add(int a, int b) {
        cout << a + b << endl;
        return a + b;
    }

    static int subtract(int a, int b) {
        cout << a - b << endl;
        return a - b;
    }

    static int multiply(int a, int b) {
        cout << a * b << endl;
        return a * b;
    }

    static int divide(int a, int b) {
        cout << a / b << endl;
        return a / b;
    }
};



#endif //CALCULATOR_H
