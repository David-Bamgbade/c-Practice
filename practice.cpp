#include <iostream>
#include <vector>
using namespace std;

void mainMenu() {
  cout << "Hello World!" << std::endl;
}

string name[] = {"david", "victor"};

int myFunction(int x, int y) {
  cout << x * y << endl;
  return x * y;
}

string numbers[] = {"david", "bamgbade"};

string nameFunc() {
  for (string i : numbers) {
    if (i == "david") {
       cout << "Correct" << endl;
       return "Correct";
    }
  }
}


vector<string> names = {"david", "Bamgbade", "Oluwamuyiwa"};

vector<string> numbersFunc() {
  for (string i : numbers) {
    if (i == "david") {
      cout << "Thats My Name" << endl;
    }
  }
}






