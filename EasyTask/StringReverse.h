//
// Created by dell on 11/27/2024.
//

#ifndef STRINGREVERSE_H
#define STRINGREVERSE_H
#include <iostream>
using namespace std;

class StringReverse {
    public:
    string reverse(string s) {
        char names[s.length()];
        for (int i = s.length() - 1; i >= 0; i--) {
            names[i] = s[i];
        }
        cout << names << endl;
        return s;
    }
};



#endif //STRINGREVERSE_H
