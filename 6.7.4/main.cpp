#include <iostream>

using namespace std;
//'A', 'B', 'C', 'D', 'E',
int main()
{
    char answers[8][10] = {
    { 'A', 'B', 'A', 'C', 'C', 'D', 'E', 'E','A', 'D'},
    { 'D', 'B', 'A', 'B', 'C', 'A', 'E', 'E','A', 'D'},
    { 'E', 'B', 'A', 'C', 'C', 'D', 'E', 'E','A', 'D'},
    { 'E', 'A', 'A', 'C', 'C', 'D', 'E', 'E','A', 'D'},
    { 'E', 'B', 'A', 'C', 'C', 'D', 'E', 'E','E', 'D'},
    { 'E', 'B', 'A', 'C', 'C', 'D', 'E', 'E','A', 'A'},
    { 'E', 'B', 'A', 'C', 'C', 'D', 'E', 'E','A', 'D'},
    { 'E', 'B', 'E', 'C', 'C', 'D', 'E', 'E','A', 'D'}
    };

    char t[10] = {'D', 'B', 'D', 'C', 'C', 'D', 'A', 'E', 'A', 'D'};

    for (int row = 0; row < 8; row ++)
    {
        int correctAnswer = 0;// every new loop must have 0 as beginning
        for (int couloum = 0; couloum < 10; couloum ++)
        {
            if (answers[row][couloum] == t[couloum])
                correctAnswer ++;
        }
        cout << "student " << row << "get " << correctAnswer << "point"<< endl;
    }
    return 0;
}
