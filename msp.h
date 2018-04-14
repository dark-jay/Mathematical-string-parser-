/*///////////////////////////////////////////////////////////////////////////////
// This is a Mathematical string parser which can parse a mathematical equation into single value
// Data structure used here is Infix to postfix conversion with evaluation
// This is so far the advanced one written by me
// there is no limitations of number of digits in integer or with decimal values
// as long as it is supported by compiler, but c++ does optimized it, it can be override by <iomanip.h>
// it support trigonometric functions including inverse, and hyperbolic
// it also support -ve value, but only at the beginning
// by- jay nath
// contact: jay14nath@gmail.com
*////////////////////////////////////////////////////////////////////////////////

#ifndef MSP_H
#define MSP_H

#include <iostream>
#include <ctype.h>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>

using namespace std;

class msp
{
    public:
        msp(string infix);

        double returnYvalue(double xVal);

    private:
        string input; // input Infix

        int prec(char c);
        int endPosOfTrigFuncInfix(string s, int pos);
        string trigFunctionValueInString(int posOfLbracket, string s, string trigFuncName);
        string infixToPostfix(string s);
        double evaluatePostfix(string s);
        template <class T>
        T multiCharDigitToNumber(T intOrDec, string inputCharDigits);
};

#endif // MSP_H
