#include <iostream>

using namespace std;





/*//6.7.3 6-11
const int COULUM_SIZE = 3;
int sum (const int a[][COULUM_SIZE], int rowsize)
{
    int total = 0;
    for (int row = 0; row < rowsize; row++)
    {
        for (int coulum = 0 ; coulum < COULUM_SIZE; coulum ++)
        {
            total += a[row][coulum];
        }
    }
    return total;
}

int main()
{
    int as[4][3] = {
    {1, 2, 3},{4, 5, 6},{7, 8, 9},{10, 11, 12}
    };
    cout << sum(as, 4);
}


6-10 6.6.2
void insertionSort(double listA[], int arraysize)
{
    for (int i = 1; i <= arraysize; i++)
    {
        double currentValue = listA[i];
        int k;
        for (k = i - 1; k >= 0 && currentValue >= listA[k]; k--)
        {
            listA[k + 1] = listA[k];
        }
        listA[k + 1] = currentValue;

    }
}

int main()
{

    double listI[] = {1, 9, 4.5, 6, 8};
    insertionSort(listI, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << listI[i] << "  ";
    }
    return 0;
}
*/
