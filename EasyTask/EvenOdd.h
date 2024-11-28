//
// Created by dell on 11/27/2024.
//

#ifndef EVENODD_H
#define EVENODD_H

#include "iostream"
using namespace std;

class EvenOdd {
    public:
    int evenNumber(int number) {
        if (number % 2 == 0) {
            cout << "Even Number: " << number << endl;
            return true;
        }
        return false;
    }

    int oddNumber(int number) {
        if (number % 2 == 0) {
            cout << "Odd Number: " << number << endl;
            return true;
        }
        return false;
    }
};



#endif //EVENODD_H
