// 7.8check_substring.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;

// use a const size of string here for easy test
const int SIZE_OF_SRTING = 20;
bool is_substring(const char* s1, const char* s2)
{
    //1. identify the lenth of s1 and s2, here 
    int indexS1 = 0, indexS2 = 0;
    for (indexS1; indexS1 < SIZE_OF_SRTING; indexS1++)
    {
        if (s1[indexS1] == '\0') {
            break;
        }
    }
    // the index here is the lenth not lenth-2
    for (indexS2; indexS2 < SIZE_OF_SRTING; indexS2++)
    {
        if (s2[indexS2] == '\0') {
            break;
        }
    }
    //if indexs1 > index s2 , it's impssible for s1 be the substring of s2
    if (indexS1 > indexS2)
    {
        return 0;
    }
    //1) identify if s1[0] belong to s2 (compare indexS2- indexS1 times
    //because the lasr s2 is smaller than s1
    for (int i = 0; i <= (indexS2 - indexS1) ; i++)
    { 
        //first identify if there is a s1[0] = s2[i]
        if (s1[0] == s2[i])
        {// continue to compare other elements in s1 and s2
            //s1 start at s1[0], s2 start with s2[i]
            for (int k = 1; k < indexS1; k++)//k should start with 1 instead of 2
            {
                if(s1[k] != s2[i + k])
                {
                    return 0;
                }
            }
            return 1;
        }
        //if they are not equal, then find next s2[i]
    }
    //if after loop s1 and s2 still have no equal elements
    return 0;
}

char *enter_a_string()
{
    //出来了内存会被回收，所以要new一个，记得回收
    cout << "Enter a string of words, less than "<< SIZE_OF_SRTING <<" characters";
    //有了指针可以不声明数组
    //char s[SIZE_OF_SRTING];
    char* ps = new char[SIZE_OF_SRTING];
    cin.getline(ps, SIZE_OF_SRTING,'\n');
    return ps;//此处不加pointer是因为这个变量就是个指针变量
}

int main()
{   
    char *s1 = enter_a_string();//声明一个叫s1的char类型指针，指针值由enterxxxx返回
    char *s2 = enter_a_string();//指针值是数组（enterxx里那个s的）地址
    //但是可以用 s1[i]访问s里的内容
    if (is_substring(s1, s2))
    {
        cout << "s1 is a substring of s2";
    }
    else
    {
        cout << "no";
    }

    return 0;
}