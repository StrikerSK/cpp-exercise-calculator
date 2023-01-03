//
// Created by Kristian Hanus on 03.01.2023.
//

#ifndef C_EXERCISE_CALCULATOR_INPUT_H
#define C_EXERCISE_CALCULATOR_INPUT_H

#include <iostream>
#include <string>

using namespace std;

namespace input {
    string getString();
    float getFloat();
    int getInteger();


    string getString() {
        string input;
        cin >> input;
        return input;
    }

    float getFloat() {
        string input = getString();

        while (true) {
            try {
                float number = stof(input);
                if (number < 0) {
                    cout << "Please enter a positive number!" << endl;
                    input = getString();
                } else {
                    return number;
                }
            } catch (...) {
                cout << "This element was not of Float type! Please try again!" << endl;
                input = getString();
            }
        }
    }

    int getInteger() {
        string input = getString();

        while (true) {
            try {
                int number = stoi(input);
                if (number < 0) {
                    cout << "Please enter a positive number!" << endl;
                    input = getString();
                } else {
                    return number;
                }
            } catch (...) {
                cout << "This element was not of Float type! Please try again!" << endl;
                input = getString();
            }
        }
    }
}

#endif //C_EXERCISE_CALCULATOR_INPUT_H
