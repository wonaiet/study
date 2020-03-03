#include <iostream>
#include <iomanip>

#include "reverse.h"


using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= (n / 2) ; i++)
    {
        if (n % i == 0)
        {
//            cout << n << "is i" << endl;
            return 0;
            break;
        }

    }

    return 1;
}

bool isEmirp(int n)
{
    if (isPrime(n))
    {
        int reverseN = reverseMun(n);

        if (isPrime(reverseN))
        {

 //          cout << n << endl;
//           cout << reverseN << endl;
            return 1;
        }
    }
        else
        {
             return 0;
        }

}

/*void Emirp(int n)
{
    while (isEmirp(n))
    {
        n++;
    }
    cout << setw(4) << n;
}
*/
int main()
{
    int n = 2;
    int i = 0;
/*    for (int i = 1; i <= 100; i++)
    {
        if (isEmirp(n))
        cout << setw(4) << n << endl;
        n++;
    }
    */



    while (i < 100)
    {
 //       Emirp(n);
        if (isEmirp(n))
        {
            cout << setw(8) << n;

            if (i % 10 == 0)
            {
                cout << "\n";
            }

            i++;
        }

        n++;
    }

    return 0;
}
