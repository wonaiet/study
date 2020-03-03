#include <iostream>

using namespace std;

/*bool isDifferentNumber(int n[], int arrarySize)
{
    int k = 0;
    for (int i = 0; i < arrarySize; i++)

}
// 6.5
*/
int main()
{
    cout << "enter numbers";
    int nOrignal[10];
    cin >> nOrignal[0];
    for (int i = 1; i < 10; i++)
    {
        cin >> nOrignal[i];
        int value = nOrignal[i];
  //      cout << nOrignal[i] << ",";
        for (int k = i; k < 0; k--)
        {
            if (value == nOrignal[k - 1])
            {
                break;
            }

        }
            cout << nOrignal[i];
    }


    return 0;
}

