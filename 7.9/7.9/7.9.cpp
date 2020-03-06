// 7.9.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<cstring>
using namespace std;
//7.9.5 子串sub string 
char* substing(const char* const s, int start, int end)
{
    char* pNewString = new char[end - start + 2];
    int j = 0;
    for (int i = start; i < end; i++, j++)
    {
        pNewString[j] = s[i];
    }
    //set a null terminator
    //here j is j++; so we do not have to use j + 1
    pNewString[j] = '\0';

    return pNewString;
}

int main()
{
    char s[] = "atlanta, georgia";
    cout << substing(s, 2, 7);

    return 0;
}
/*
//7.9.4 
//sting conversion 
int main()
{
    // i e 1
    cout << atoi("5.5") + atoi("4.5") << endl;
    
    // ie 2
    char s[10];
    _itoa_s(42, s, 8);
    cout << s << endl;
    _itoa_s(42, s, 10);
    cout << s << endl;
    _itoa_s(42, s, 16);
    cout << s << endl;

}


//7-12 concatenate -- compare string 
// book example unavaliable, check for break step
int main()
{
    char s1[] = "abcdefg";
    char s2[] = "abcdg";
    char s3[] = "abcdg";

    char* p1 = s1;
    char* p2 = s2;
    char* p3 = s3;
    //e < g ;
    cout << "strcmp(s1, s2) is " << strcmp(s1, s2) << endl;
    cout << "strcmp(s2, s1) is " << strcmp(s2, s1) << endl;
    cout << "strcmp(s2, s3) is " << strcmp(s2, s3) << endl;
    cout << "strncmp(s1, s2, 3) is " << strncmp(s1, s2, 3) << endl;
    cout << "strcmp(p1, p2) is " << strcmp(p1, p2) << endl;
    cout << "strcmp(p2, p1) is " << strcmp(p2, p1) << endl;
    cout << "strcmp(p2, p3) is " << strcmp(p2, p3) << endl;
    cout << "strncmp(p1, p2, 3) is " << strncmp(p1, p2, 3) << endl;
   
   // get -1 1 0 0 -1 0 0 
}

//7-11 concatenate -- con`cat`e`nate combine string
int main()
{
    char s1[20] = "dallas";
    char s2[] = "texas, usa";
    char s3[] = "dallas";
    strcat_s(s1, ", ");
    strcat_s(s1 , s2);
    strcat_s(s3, ", ");
    strncat_s(s3, s2, 5);

    cout << "s1 is " << s1 << endl;
    cout << "s2 is " << s2 << endl;
    cout << "s3 is " << s3 << endl;
    cout << "lenth of s1 is " << strlen(s1) << endl;
    cout << "lenth of s3 is " << strlen(s3) << endl;
}
 /*
//7-10copy string
//on book its strcpy and strncpy
//visual studio change it to strcpy_s and strcpy_s

int main()
{
    char s1[20];
    //let c++ figure out the size  of s2 and s3
    char s2[] = "dallas";
    char s3[] = "AAAAAAAAAA";

    strcpy_s(s1, s2);
    strncpy_s(s3, s2, 10);
    //s3[2] = '\0'; // insert a null terminator

    cout << "s1 is " << s1 << endl;
    cout << "s2 is " << s2 << endl;
    cout << "s3 is " << s3 << endl;
    cout << "lenth of s3 is " << strlen(s3) << endl;
}

//7.9.2 cin.getline and how to read a city name
int main() 
{
    char city[30];
    cout << "enter a city ";
    cin.getline(city, 30, '\n');
    cout << "it's " << city << endl;
}



//7.9 TEST a character, and identify if it is a lowercase, uppercase number, or else
//<cctype> is not need to be include
int main()
{
    cout << "enter a character : ";
    char a;
    cin >> a;

    cout << "you entered " << a << endl;
    if (islower(a))
    {
        cout << "this is a lowercase letter ,\n its equivalent uppercase letter is "
            << static_cast<char>(toupper(a)) << endl;
    }
    else if (isupper(a))
    {
        cout << "this is a uooercase letter ,\n its equivalent lowercase letter is "
            << static_cast<char>(tolower(a)) << endl;
    }
    else if (isdigit(a))
    {
        cout << "this is a number" << endl;
    }
     else
     {
              cout << "this is noting" << endl;
     }
     
    return 0;
}
*/