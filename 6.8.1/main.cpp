#include <iostream>

using namespace std;

int main()
{
    const int NUMBER_OF_STUDENT = 7;
    const int NUMBER_OF_EXAMES = 5;
    const int PARTS_OF_EXAMES = 2;
    double scores [NUMBER_OF_STUDENT][NUMBER_OF_EXAMES][PARTS_OF_EXAMES]
    {
        {{7, 11}, {7, 23}, {9, 27}, {5, 34}, {7, 19}},
        {{6, 11}, {5, 23}, {6, 27}, {5, 34}, {6, 19}},
        {{9, 11}, {6, 23}, {9, 27}, {9, 34}, {7, 19}},
        {{10, 15}, {5, 23}, {6, 27}, {7, 34}, {7, 19}},
        {{10, 11}, {5, 23}, {7, 27}, {5, 34}, {7, 19}},
        {{10, 11}, {5, 23}, {7, 27}, {5, 34}, {7, 19}},
        {{10, 11}, {5, 23}, {7, 27}, {5, 34}, {7, 19}},
    };
    for (int i = 0; i < NUMBER_OF_STUDENT; i++)
    {
        double total = 0;
        for (int j = 0; j < NUMBER_OF_EXAMES; j++)
        {
            for (int k = 0; k < PARTS_OF_EXAMES; k++)
                total += scores[i][j][k];
        }
        cout << "student "<< i << "get total score as" << total << endl;
    }

    return 0;
}
