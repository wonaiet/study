// 8.3gcd.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;

void gcd(int n1, int n2) {
    if (n1 % n2 == 0)
    {
        cout << n2 << " is the gcd "<< endl;
    }
    else
    {
        gcd(n2, n1 % n2);
    }
}

int main()
{
    //enter 2 integer
    cout << "enter 2 integers ";
    int m = 0, n = 0;
    cin >> m;
    cin >> n;
    // compare m and n who is bigger
    if (m < n) {
        gcd(m, n);
    }
    else
    {
        gcd(n, m);
    }
    
    return 0;
}
