// sorting_overloading.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;

const int asize = 5;

char* sort1(char* s)
{//for every i, check everyelement less than i if s[i] is the max
    //identify with pair, swap if latter element is smaller
    for (int i = 0; i < asize; i++)
    {
        char current_element = s[i];
        int k;
        for (k = i - 1; k >= 0 && s[k] > current_element; k--)
        {
            s[k + 1] = s[k];
            // here we cannot write s[i] = s[k]
            //since i in this loop is not changed
            s[k] = current_element;
        }
        
    }
    for (int i = 0; i < asize; i++)
    {
        cout << s[i];
    }
    return s;
}

void sort1(const char* const s, char* s1)
{
    //basic condition
    s1[0] = s[0];
    
    for (int i = 1; i < asize; i++)
    {
        char current_element = s[i];
        int k = 0;
        s1[i] = s[i];
        for (k = i - 1; k >= 0 && s1[k] > current_element ; k--)
        {
            s1[k + 1] = s1[k];
        }
        s1[k + 1] = current_element;
    }
    for (int i = 0; i < asize; i++)
    {
        cout << s1[i];
    }
}

int main()
{
    char st[] = "acbde";
    char* s = st;
    char* s1 = new char[asize];
    sort1(s);
}
