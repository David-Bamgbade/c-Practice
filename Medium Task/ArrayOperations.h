//
// Created by dell on 11/28/2024.
//

#ifndef ARRAYOPERATIONS_H
#define ARRAYOPERATIONS_H

#include<iostream>
using namespace std;

class ArrayOperations {
    public:
    static int largestInArray(int arr[]) {
        int largest = arr[0];
        for (int i = 0; i <= sizeof(arr);  i++) {
            if (arr[i] > largest) {
                largest = arr[i];
            }
        }
        cout << "Largest Number In Array: " << largest << endl;
        return largest;
    }
};


#endif //ARRAYOPERATIONS_H
