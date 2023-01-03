#include <iostream>
#include <string>
#include "input.h"

using namespace std;
using namespace input;

int main() {
    cout << "Hello user! I can calculate for you 1-RM, N-RM and Weight of your exercise!" << endl;
    cout << "Which one would you like to calculate (Max, Reps, Weight)?" << endl;
    string name = getString();

    while (true){
        if (name == "max") {
            cout << "You chose Max!" << endl;
            int test = getInteger();
            cout << test << endl;
            cout << "You selected max" << endl;
            break;
        } else if (name == "reps") {
            cout << "You selected reps" << endl;
            break;
        } else if (name == "weight") {
            cout << "You selected weight" << endl;
            break;
        } else {
            cout << "Sorry, I don't know this calculation type! Do you want to calculate: Max, Reps or Weight!" << endl;
            cin >> name;
        }
    }

    return 0;
}