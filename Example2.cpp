//
// Created by dell on 11/27/2024.
//

#include <iostream>
using namespace std;

class Example2 {
    public:
    string name;
    string colour;
    string model;

    Example2(string &m, string &c, string &n) {
        model = m;
        colour = c;
        name = n;
    }
};