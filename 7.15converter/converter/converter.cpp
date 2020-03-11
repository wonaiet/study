// converter.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;

const int SIZE = 20;

//firstlly, check how many elements in the string is valid
int Check_Valid_Size(char* s)
{
    for (int i = 0; i < SIZE + 1; i++)
    {
        if (s[i] == '\0')
        {
            return i;
            //in fact, i+1 is the real size of this *s
            //but we only need the valid numbers so we exclude the '\0'
        }
    }
}
//print
void PrintPointer(char* s, int real_size) // only need print 'size' long elements  
{
    for (int i = 0; i < real_size; i++)
    {
        cout << s[i] << ",  ";
    }
}
// make the uppercase and lowercase the same
void getAlTheSame(char * s, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (isupper(s[i]))
            // only change s[i] is not good!
            //!!! tolower return a int!!!
            // static cast is needed
            s[i] = static_cast<char>(tolower(s[i]));
    }
}
//hexadecimal to decimal
void hexadecimal_to_decimal(char* s, int real_size)
{
    int sum = 0, decimal = 0;

    for (int i = real_size - 1, k = 0; i >= 0; k++,i--)
    {//3 situations
        if ('0' <= s[k] && s[k] <= '9')// 1st
            //'0' <= s[i] <= '9' is not safe
        {
            decimal =  pow(16.0, i);
            decimal *= (s[k] - '0');
        }
        else if ('a' <= s[k] && s[k] <= 'f')
        {
            decimal = pow(16.0, i);
            decimal *= (s[k] - 'a'+ 10);
        }
        sum += decimal;
    }
    cout << "the decimal is " <<sum << endl;
}
//Binary to decimal
void binary_to_decimal(char* s, int size)
{
    int sum = 0, decimal = 0;

    for (int i = size - 1, k = 0; i >= 0; k++, i--)
    {//3 situations
        decimal = pow(2.0, i);
        decimal *= (s[k] - '0');
        
        sum += decimal;
    }
    cout << "the decimal is " << sum << endl;
}

char* converDecimalToBinary(int value)
{
    //the problem is the value is a int, but what we want is a char
    char* binary_string = new char[50];
    int mod = 0;
    //count of b_s[i]
    int i = 0;
    for (; value > 0; i++)
    {
        mod = value % 2 + 48; // plus 48 for ASCII
        binary_string[i] = (char)mod;//so change the number into char
        value = floor(value / 2);
 //       cout << binary_string[i];
    }
    //dont forget to give a \0 to the end~
    binary_string[i] = '\0';
    return binary_string;
}

char* converDecimalToHexadecimal(int value)
{
    //the problem is the value is a int, but what we want is a char
    char* binary_string = new char[50];
    int mod = 0;
    //count of b_s[i]
    int i = 0;
    for (; value > 0; i++)
    {
        mod = value % 16;
        if (mod >= 0 && mod < 10)
        {
            mod += 48;
        }
        else
        {
            mod += 55;// not 65, is 65-10
        }
        binary_string[i] = (char)mod;
        value = floor(value / 16);
        //       cout << binary_string[i];
    }
    //dont forget to give a \0 to the end~
    binary_string[i] = '\0';
    return binary_string;
}

void converDecimalToHexadecimal(int value, char *s)
{
    //the problem is the value is a int, but what we want is a char
    char* binary_string = new char[50];
    int mod = 0;
    //count of b_s[i]
    int i = 0;
    for (; value > 0; i++)
    {
        mod = value % 16;
        if (mod >= 0 && mod < 10)
        {
            mod += 48;
        }
        else
        {
            mod += 55;// not 65, is 65-10
        }
        binary_string[i] = (char)mod;
        value = floor(value / 16);
        //       cout << binary_string[i];
    }
    //dont forget to give a \0 to the end~
    binary_string[i] = '\0';
    int real_size = Check_Valid_Size(binary_string);
    for (int i = 0, k = real_size - 1; i < real_size && k >= 0; i++, k--)
    {
        s[i] = binary_string[k];
        cout << s[i];
    }
}
int main()
{/*
    char*string = new char [SIZE + 1];// declare a string 
    cout << "enter a " << "hexadecimal " << "number in 20 digit" << endl;
    cin.getline(string, SIZE); //read string
 */

    //check real size
    char* a = new char [30];
    converDecimalToHexadecimal(127, a);
//    char* a = converDecimalToBinary();
//    int real_size = Check_Valid_Size(a);
//    cout << "you enter a " <<real_size << " lenth string" << endl;
    
    //make the same
//    getAlTheSame(string, real_size);

    //printer
//    PrintPointer(a, real_size);

 
//    hexadecimal_to_decimal(string, real_size);
//    binary_to_decimal(string, real_size);

    


    
}