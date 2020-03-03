#ifndef REVERSE_H_INCLUDED
#define REVERSE_H_INCLUDED
#include <math.h>

int findDigitalNumber (int n)
{
     int a = 0;
     for (int i = 1; i <= n; i *=10)
    {
         a++;
    }
//   cout << a << endl;
    return a;
}



int reverseMun(int n)
{
    int a = findDigitalNumber(n);
    int lastRN = 0, lastN = n, rnSum = 0;
    for (int i = 1; i <= a; i++)
    {
        //cout << lastN << endl;
        lastRN = lastN % 10;
        //cout << lastRN << endl;
        double test = pow(10, (a-i));
        //here must have a double
        // cannot be wrote as lastRN = lastRN * pow(10, (a-i)), since pow()is dounle
        //cout << test << endl;
        lastRN = lastRN * test;
        //cout << lastRN << endl;
        lastN = n / pow(10, i);
        //cout << lastN << endl;
        rnSum += lastRN;
        //cout << rnSum << endl;
    }
    return rnSum;
}

#endif // REVERSE_H_INCLUDED
