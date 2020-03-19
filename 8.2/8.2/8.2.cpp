// 8.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "return_a_substing.h"

using namespace std;
//8.2 factorial
int factorial(int n)
{
	if (n == 0) //base case
		return 1;
	else
		return n * factorial(n - 1);// recursive call
}
// 8.3 fibonacci
int fib(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
	{
		return fib(n - 2) + fib(n - 1);
	}
}

//8.3 recursive palindrome
bool isPalindrome(const char* const s)
{
	//if (strlen(s) <= 1) //base case
	//{
	//	return true;
	//}
	//else if (s[0] !=  s[strlen(s)-1]) //base case
	//{
	//	return false;
	//}
	//else
	//{
	//	return isPalindrome(substring(s, 1, strlen(s) - 1));
	//}
	return isPalindrome(s, 0, strlen(s) - 1);
}

//8.4
bool isPalindrome(const char* const s, int low, int high)
{
	if (high <= low) //base case, check if this string have <= 1 element
	{
		return true;
	}
	else if (s[low] != s[high]) //base case
	{
		return false;
	}
	else
	{
		return isPalindrome(s, low - 1, high - 1);
	}
}


int main()
{
	/*prompt the user to enter a integer
	cout << "enter a non-nagitive integer : ";
	int n;
	cin >> n;

	// display factorial
	cout << "the factorial of " << n << " is " << factorial(n) << endl;
	// display fibonacci
	cout << "the fibonacci of " << n << " is " << fib(n) << endl;*/

	cout << "enter a string : ";
	char s[80];
	cin.getline(s, 80);

	if (isPalindrome(s))
		cout << "yes ";
	else
	{
		cout << "no ";
	}

	return 0;
}

