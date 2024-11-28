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
        for (int i = s.length() - 1; i >= 0; i--) {
            cout << s[i];
        }
        return s;
    }
};



#endif //STRINGREVERSE_H
