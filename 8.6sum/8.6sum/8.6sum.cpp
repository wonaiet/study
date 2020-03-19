// 8.6sum.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

float suma(int a)
{
    //initalize the sum 
   //float suma = 0;
    //identify each number
    //base case a = 1, the number is 1/1 the sum is 1
    if (a == 1) {
        return 0.5;
    }
    //not need a else here
    return suma(a - 1) + a / (a + 1.0);// 1.0 to make 'a' a float
}

int main()
{
    int a = 0;
    cin >> a;
    cout << suma(a) << endl;

    return 0;
 }