## Mathematical-string-parser-C++
It is a simple string parser for simple math equation to give single value as output, e.g. 5x+3

This parser is purely written in C++ with having no 3rd party library. 

It takes input(equations) in the form of String and give single output value. 

## Example input equations:
* Input is y = "12.2+2-1"
* Output is = 13.2
* Trigonometric function e.g.  sin(sin(2x+1))
         
## Supported operators: +, -, *, /, ^, (,) 

## Supported functions: 
> Trigonometric functions: sin, cos, tan, csc, sec, cot, asin, acos, atan, acsc, asec, acot sinh, cosh, tanh, csch, sech, coth
*All trigonometric functions performes computations in radians.*

## How to use in your code:
######      Include the header file in main program
            #include <msp.h> 
            
######      In case if you place the msp.h header file in same directory 
            #include "msp.h" 

######      Create an object of msp class with the equation string as parameter
            msp equation("sin(x)+5"); 

######      Get the value by calling returnYvalue() function, this function returns a double and takes x value as parameter
            double result = equation.returnYvalue(1); 
       
                     
## Attention:
There is no exception is used so it might throw error with infinite value, give exception yourself if anyone want 

## Conclusion: 
This is a great start for anyone who would like to create a string parser for Mathematical equations. And i will be creating another Repository explaining how to use this parser by creating a simple Graph plotting Calculator program shortly. 
           
