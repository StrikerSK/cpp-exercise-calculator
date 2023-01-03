//
// Created by Kristian Hanus on 03.01.2023.
//
#include <iostream>
#include <string>
#include "InputHandler.h"

using namespace std;
using namespace input;

#ifndef C_EXERCISE_CALCULATOR_CALCULATORITERFACE_H
#define C_EXERCISE_CALCULATOR_CALCULATORITERFACE_H


class CalculatorInterface {
    public:
        virtual float CalculateOneRepMax(int reps, float weight) = 0;
        virtual float CalculateSetRepMax(float pr, float weight) = 0;
        virtual float CalculateUsedWeight(float pr, float reps) = 0;
};

class WendlerCalculator: public CalculatorInterface {
    public:
        float CalculateOneRepMax(int reps, float weight) override {
            return weight * reps * 0.0333 + weight;
        };

        float CalculateSetRepMax(float pr, float weight) override {
            return (pr - weight) / (weight * 0.0333);
        };

        float CalculateUsedWeight(float pr, float reps) override {
            return pr / ((reps * 0.0333) + 1.0);
        };
};

#endif //C_EXERCISE_CALCULATOR_CALCULATORITERFACE_H
