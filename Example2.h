//
// Created by dell on 11/27/2024.
//

#ifndef EXAMPLE2_H
#define EXAMPLE2_H
#include <string>
using namespace std;

class Example2 {
public:
    string name;
    string colour;
    string model;

    Example2(const string &m, const string &c, const string &n) {
        model = m;
        colour = c;
        name = n;
    }
};

#endif //EXAMPLE2_H
