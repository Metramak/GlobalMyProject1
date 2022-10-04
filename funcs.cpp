//funcs.cpp 
#include "stdafx.h" 
#include "funcs.h"

double MySum(double a, double b) 
{ 
    return a + b; 
}

double MySub(double a, double b) 
{ 
    return a - b; 
}

<<<<<<< HEAD
int MyPow(int num, int n)
{
    int res = num;
    for(int i = 1; i < n; i++)
    {
        res *= num;
    }
    return res;
=======
double MyPow(double a, double b)
{
    return exp(b * log(a));
>>>>>>> develop
}