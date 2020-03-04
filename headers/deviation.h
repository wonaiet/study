#ifndef DEVIATION_H_INCLUDED
#define DEVIATION_H_INCLUDED

#include <iostream>
#include <math.h>
using namespace std;

//to calculate the average of 1 to n


double deviation(double PowSumMean , double mean )
{
    double deviation = 0;
    deviation = PowSumMean - pow(mean, 2)/ 10;
    deviation /= 9;
    deviation = sqrt(deviation);
    return deviation;

}

#endif // 5_22HEADDEVIATION_H_INCLUDED
