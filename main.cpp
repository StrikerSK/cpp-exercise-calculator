#include <iostream>
#include <string>
#include "InputHandler.h"
#include "Calculator.h"
#include "CalculatorRunner.h"

using namespace std;
using namespace input;

int main() {
    cout << "Hello user! I can calculate for you 1-RM, N-RM and Weight of your exercise!" << endl;
    cout << "Which one would you like to calculate (Max, Reps, Weight)?" << endl;
    string name = getString();

    while (true){

        // Only way to assign Abstract class implementation is by using pointer
        // Goal was to assign implementation class to interface variable
        CalculatorInterface* calculatorInterface = new WendlerCalculator();

        // To compare string we cannot use switch
        if (name == "max") {
            runner::CalculateExerciseMax(*calculatorInterface);
            break;
        } else if (name == "reps") {
            runner::CalculateExerciseSet(*calculatorInterface);
            break;
        } else if (name == "weight") {
            runner::CalculateExerciseWeight(*calculatorInterface);
            break;
        } else {
            cout << "Sorry, I don't know this calculation type! Do you want to calculate: Max, Reps or Weight!" << endl;
            cin >> name;
        }
    }

    return 0;
}