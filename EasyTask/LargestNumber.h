//
// Created by dell on 11/27/2024.
//

#ifndef LARGESTNUMBER_H
#define LARGESTNUMBER_H

#include <iostream>
using namespace std;

class LargestNumber {
    public:
        int numbers(int number1, int number2, int number3) {
            int arr[3] = {number1, number2, number3};
            int largest = arr[0];
            for (int i = 0; i < 3; i++) {
                if (arr[i] > largest) {
                    largest = arr[i];
                }
            }
            cout << "Largest Number: " << largest << endl;
            return largest;
      }
};

#endif //LARGESTNUMBER_H
