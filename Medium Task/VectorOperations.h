//
// Created by dell on 11/28/2024.
//

#ifndef VECTOROPERATIONS_H
#define VECTOROPERATIONS_H
#include <iostream>
#include <vector>
using namespace std;

class VectorOperations {
    public:
    vector<int> addVector(vector<int> v1) {
       int largest = v1[0];
        for (int i = 0; i < v1.size(); i++) {
            if (v1[i] > largest) {
                largest = v1[i];
            }
        }
        cout << "Largest In The Vector: " << largest << endl;
        return vector<int>(largest);
    }
};


#endif //VECTOROPERATIONS_H
