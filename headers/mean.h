#ifndef MEAN_H_INCLUDED
#define MEAN_H_INCLUDED
#include <iostream>
using namespace std;

//to calculate the average of 1 to n

double mean(int number)
{
    double sum = 0;
    for (int i = 1; i <= number; i++)
    {
        sum += i;
    }
    //double mean = ;
    return sum / number;
}


#endif // 5_22HEADMEAN_H_INCLUDED
