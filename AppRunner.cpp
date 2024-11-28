#include <iostream>

#include "EasyTask/EasyTask1.h"
#include "Example1.h"
#include "Example2.h"
#include "EasyTask/Calculator.h"
#include "EasyTask/EvenOdd.h"
#include "EasyTask/LargestNumber.h"
#include "EasyTask/StringReverse.h"

using namespace std;

int myFunction(int x, int y) {
    cout << x << " multiplied by " << y << " Equlas " << x * y << endl;  ;
    return x + y;
}

int main() {
    Example1 person1;
    person1.name = "John";
    person1.age = 18;
    person1.gender = "male";
    cout << person1.age << endl << person1.name << endl << person1.gender << endl;
    myFunction(4, 6);
    Example2 person2("2024", "white", "Benz");
    cout << person2.colour << endl << person2.name << endl << person2.model << endl;
    EasyTask1 task;
    task.greetingMessage("david", "18");
    Calculator calculator;
    calculator.add(2, 5);
    calculator.subtract(15, 7);
    calculator.multiply(8, 9);
    calculator.divide(10, 2);
    EvenOdd evenOdd;
    evenOdd.evenNumber(6);
    evenOdd.evenNumber(7);
    LargestNumber newNumber;
    newNumber.numbers(1, 2, 4);
    StringReverse stringReverse;
    stringReverse.reverse("John");
    return 0;
}



// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu