#include <iostream>

using namespace std;

int main()
{
    int date[5][4][4];
    char answer;

     date[0][0][0] = 16;
     date[1][0][0] = 8;
     date[2][0][0] = 1;
     date[3][0][0] = 2;
     date[4][0][0] = 4;
     // have to have a value, or it will ends up with a really big number
     int value1 = date[0][0][0];
     int value2 = date[1][0][0];
     int value3 = date[2][0][0];
     int value4 = date[3][0][0];
     int value5 = date[4][0][0];
     int dateOfBirth = 0;


    //date 1 x x
    cout << "set 1 \n" ;

    for (int j = 0; j < 4; j++)
    {

        for (int k = 0; k < 4; k++)
        {
            if (j == 0 && k == 0)
            {
            }
            else
            {
                value1 ++;
                date[0][j][k] = value1;
            }

             cout << date[0][j][k] << ", ";

        }
        cout << "\n";
    }
    cout << endl;

    cout << "your BD in set 1 ?" <<endl;
    cin >> answer;
    if (answer == 'y'|| answer == 'Y')
    {
        dateOfBirth += 16 ;
    }



     //date 2 x x
    cout << "set 2 \n" ;
    for (int j = 0; j < 4; j++)
    {
        int k = 0;

        if (j == 2)
        {
            value2 += 8;
            date[1][j][k] = value2;
//            cout << j << ", ";
        }

        for (k = 0 ; k < 4; k++)
        {
            if (j == 0 && k == 0)
            {
            }
            else
            {
                value2 ++;
                date[1][j][k] = value2;
            }
//            cout << j << ", " << k << ", ";
            cout << date[1][j][k] << ", ";
        }
        cout << "\n";
    }
    cout << endl;


    cout << "your BD in set 2 ?" <<endl;
    cin >> answer;
    if (answer == 'y'|| answer == 'Y')
    {
        dateOfBirth += 8 ;
    }

   //date 3 x x
    cout << "set 3 \n" ;
    for (int j = 0; j < 4; j++)
    {
        for (int k = 0; k < 4; k++)
        {
            if (j == 0 && k == 0)
            {
            }
            else
            {
                value3 += 2;
                date[2][j][k] = value3;
            }

             cout << date[2][j][k] << ", ";
        }

        cout << "\n";
    }
    cout << endl;


    cout << "your BD in set 3 ?" <<endl;
    cin >> answer;
    if (answer == 'y'|| answer == 'Y')
    {
        dateOfBirth += 1 ;
    }

   //date 4 x x
    cout << "set 4 \n" ;
    int countSet4 = 1;
    for (int j = 0; j < 4; j++)
    {
        for (int k = 0; k < 4; k++)
        {
            if (j == 0 && k == 0)
            {
            }
            else if (countSet4 % 2 == 0)
            {
                value4 ++ ;
                date[3][j][k] = value4;
            }
            else
            {
                value4 += 3;
                date[3][j][k] = value4;
            }
            countSet4 ++;
            cout << date[3][j][k] << ", ";

        }
        cout << "\n";
    }
    cout << endl;

    cout << "your BD in set 4 ?" <<endl;
    cin >> answer;
    if (answer == 'y'|| answer == 'Y')
    {
        dateOfBirth += 2 ;
    }

        //date 5 x x
    cout << "set 5 \n" ;
    for (int j = 0; j < 4; j++)
    {
        int k = 0;

        for (k = 0; k < 4; k++)
        {
            if (j == 0 && k == 0)
            {
            }
            else
            {
                value5 ++;
                date[4][j][k] = value5;
            }

             cout << date[4][j][k] << ", ";
        }
        value5 += 4;
        cout << "\n";
    }


    cout << "your BD in set 5 ?" <<endl;
    cin >> answer;
    if (answer == 'y'|| answer == 'Y')
    {
        dateOfBirth += 4;
    }
    cout << endl;

    //------------------date finish--------------------------

     cout << "your BD is " << dateOfBirth << endl;






    return 0;
}
