#include <iostream>
#include <string>

using namespace std;

string getString();
float getFloat();
uint getInteger();

int main() {
    cout << "Hello user! I can calculate for you 1-RM, N-RM and Weight of your exercise!" << endl;
    cout << "Which one would you like to calculate (Max, Reps, Weight)?" << endl;
    string name  = getString();

    switch (name) {
        case "max":
            cout << "You selected max" << endl;
        case "reps":
            cout << "You selected reps" << endl;
        case "weight":
            cout << "You selected weight" << endl;
        default:
            cout << "Sorry, I don't know this calculation type! Do you want to calculate: Max, Reps or Weight!" << endl;
    }

    cout << "You entered: " << name << endl;
    return 0;
}

 string getString() {
    string input;
    cin >> input;
    return input;
}

float getFloat() {
    float input;
    cin >> input;
    return input;
}

uint getInteger() {
    uint input;
    cin >> input;
    return input;
}