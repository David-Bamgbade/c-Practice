//
// Created by dell on 11/28/2024.
//

#ifndef STRINGPALINDROME_H
#define STRINGPALINDROME_H

#include <string>
using namespace std;

class StringPalindrome {
    public:
    string isPalindrome(string s) {
        for (int i = 0; i < s.length(); i++) {
            for (int j = 0; j <= s.length() - 1; j--) {
                if (s[i] != s[j] == false) {
                    cout << "false";
                }
                else {
                    cout << "true";
                }
            }

        }

    }

};



#endif //STRINGPALINDROME_H
