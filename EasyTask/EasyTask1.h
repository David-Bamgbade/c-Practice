//
// Created by dell on 11/27/2024.
//

#ifndef EASYTASK_H
#define EASYTASK_H

#include<iostream>
using namespace std;


class EasyTask1 {
    public:
    string greetingMessage(string name, string age) {
        cout << "Hello " << name << " your're " << age << " years old" << endl;
        return "hello " + name + " your're " + age + " years old";
    }
};



#endif
