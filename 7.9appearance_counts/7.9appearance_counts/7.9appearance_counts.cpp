// 7.9appearance_counts.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;

const int SIZE_OF_STRING = 10;
//7.9 count appearance of a character in a string
int count_a_char(char* str, char a)
{
    int count = 0;
    for (int i = 0; i < SIZE_OF_STRING; i++)
    {
        if (str[i] == a)
        {
            count++;
        }
    }
    return count;
}

int* count_numbers(char* str)
{
    //declare count array, inicialize it all as 0
    int* pc = new int[SIZE_OF_STRING];
    // +1 is not needed here sinse counts only have 10 results
    for (int i = 0; i < SIZE_OF_STRING; i++)
    {
        pc[i] = 0;
    }
    //make it accessalbe after function
 
    // count everyone - 0
    for (int i = 0; i < SIZE_OF_STRING + 1; i++)
    {
        //see if it is number first
        if (isdigit(str[i]))
        {
            pc[str[i] - '0']++;
        }
    }
    return pc;//*pc 是值 pc是指针
}

void print_int_array(int* s)
{
    for (int i = 0; i < SIZE_OF_STRING; i++)
    {
        cout << i << " was appeared " << s[i] << "times \n";
    }
    cout << endl;
}

void print_array(char* s)
{
    for (int i = 0; i < SIZE_OF_STRING; i++)
    {
        cout << s[i] << ",  ";
    }
    cout << endl;
}

int main()
{
    cout << "enter a string in " << SIZE_OF_STRING << " words" <<endl;
    //give a string, since the initialise will automatically give a \o in the end
    //a size+1 string is needed
    char stings[SIZE_OF_STRING + 1];
    cin.getline(stings, SIZE_OF_STRING + 1);
    char* str = stings;
    //tell the real string that will be counted
    //so it will read size+1 elements
    print_array(str);
    //print the count
    print_int_array(count_numbers(str));

/*  7.9prints
    char a;
    cout << "enter a string      ";
    cin >> a;
    cout << "it appeared " << count_a_char(str, a) << " times." << endl;
*/
    return 0;
}
