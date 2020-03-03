#include <iostream>

using namespace std;

int main()
{
    int date = 0;
    char answer;
    int dates[5][4][4] = {};

    for (int i = 0; i < 5; i++)
    {
        cout << "your BD in set " << (i + 1) <<"?" <<endl;

        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                cout dates[i][j][k] << "   ";
            }
            cout << endl;
        }

        cin answer;
        if (answer == 1)
        {
            date += dates[i][0][0];
        }

    }

    cout << "BD is " << date << endl;


    return 0;
}
