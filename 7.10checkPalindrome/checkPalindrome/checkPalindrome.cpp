// checkPalindrome.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>

using namespace std;

bool isPalindrome(const char*);
int main()
{
    //prompt the user to enter a string
    cout << "enter a string, the string is less than 80 character" << endl;
    char s[80];
    cin.getline(s, 80);

    if (isPalindrome(s))
    {
        cout << s << "is a palindrome";
    }
    else
    {
        cout << s << "is not a palindrome";
    }
    return 0;
}

bool isPalindrome(const char* const s)
{
    // the index of the 1st character in the string
    int low = 0;
    // the index of the last character in the string
    int high = (strlen(s)) - 1;

    while (low < high)
    {
        if (s[low] != s[high])
        {
            return false;
        }
        
        low++;
        high--;
    }
    return true;
}


