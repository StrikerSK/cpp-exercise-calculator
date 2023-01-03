//
// Created by TehStriker on 03.01.2023.
//

#ifndef C_EXERCISE_CALCULATOR_CALCULATORRUNNER_H
#define C_EXERCISE_CALCULATOR_CALCULATORRUNNER_H

#include <iostream>
#include <string>
#include "InputHandler.h"
#include "Calculator.h"

using namespace std;

namespace runner {
    void CalculateExerciseMax(CalculatorInterface& calculator) {
        cout << "Please enter used reps count" << endl;
        int reps = getInteger();
        cout << "Please enter used weight" << endl;
        float weight = getFloat();
        cout << "Your one rep max is: " << calculator.CalculateOneRepMax(reps, weight) << endl;
    }

    void CalculateExerciseSet(CalculatorInterface& calculator) {
        cout << "Please enter your PR" << endl;
        float pr = getFloat();
        cout << "Please enter expected weight" << endl;
        float weight = getFloat();
        cout << "For weight " << weight << " kgs, you should execute: " << calculator.CalculateSetRepMax(pr, weight) << " reps" << endl;
    }

    void CalculateExerciseWeight(CalculatorInterface& calculator) {
        cout << "Please enter your PR" << endl;
        float pr = getFloat();
        cout << "Please enter expected reps count" << endl;
        float reps = getFloat();
        cout << "Your training weight is: " << calculator.CalculateUsedWeight(pr, reps) << endl;
    }
}

#endif //C_EXERCISE_CALCULATOR_CALCULATORRUNNER_H
