#ifndef RANDOMCHAR_H_INCLUDED
#define RANDOMCHAR_H_INCLUDED

#include <cstdlib>
using namespace std;

//generate a random [character] between ch1 and ch2
//do not forget srand!!!!!!!!!


char getRandomChar(char ch1, char ch2)
{
    if ( ch1 >= ch2)
        return 1;
    else {
        return static_cast<char> (ch1 + rand() % (ch2 - ch1 + 1));
    }
}

double getNumber(int a, int b)
{
    if (a >= b) {
        return 1;
    }
    return (a + rand() % b);
}


#endif // RANDOMCHAR_H_INCLUDED
