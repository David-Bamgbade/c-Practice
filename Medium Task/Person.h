//
// Created by dell on 11/28/2024.
//

#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <ostream>
#include <string>
using namespace std;


class Person {
    public:
    string name;
    int age;
    string gender;

    string displayname() {
        return "Name: " + name;
    }

    void writeName(string myName) {
        name = myName;
    }

    void writeAge(int myAge) {
        age = myAge;
    }

    int displayAge() {
        return age;
    }

    string displayGender() {
        return "Gender: " + gender ;
    }

    void writeGender(string gend) {
        gender = gend;
    }

};

#endif //PERSON_H
