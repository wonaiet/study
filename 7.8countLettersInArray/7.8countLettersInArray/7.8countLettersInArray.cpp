// 7.8countLettersInArray.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <ctime>


#include "RandomChar.h"

using namespace std;

const int NUMBER_OF_LETTERS = 100;
char* createArray();
void displayArray(char []);
int* countLetters(char []);
void displayCounts(int[]);

int main()
{
    //declare and create an array
    char* chars = createArray();

    //display the array
    displayArray(chars);
    
    //count the occurrences of each letter
    int* counts = countLetters(chars);

    //display counts
    cout << endl;
    cout << "the occurrences of each letter are \n";
    displayCounts(counts);
    
    return 0;
}
//create a array with random char from a to z
char* createArray()
{
    //declare an array of characters and create it
    char* chars1 = new char[NUMBER_OF_LETTERS];

    //seed given, create lowercase letters
    srand(time(0));
    for (int i = 0; i < NUMBER_OF_LETTERS; i++)
    {
        chars1[i] = getRandomChar('a', 'z');
    }
    return chars1;
}
//display array
void displayArray(char char1[])
{
    for (int i = 0; i < NUMBER_OF_LETTERS; i++)
    {
        if ((i + 1) % 20 != 0)
        {
            cout << char1[i] << ", ";
        }
        else
        {
            cout << char1[i] << endl;
        }
        
    }
}
//count the occurrence of each letter
int* countLetters(char char1[])
{
    //declare and create an array of 26 int 
    //to see each letter have how many counts; e.g list[0] is the count of 'a'
    int* counts = new int[26];
    //initialize the array
    for (int i = 0; i < 26; i++)
    {
        counts[i] = 0;
    }
    //for each lowercase letter in the array, count 
    for (int i = 0; i < NUMBER_OF_LETTERS; i++)
    {
        counts[char1[i] - 'a']++;
    }
    return counts;
}

void displayCounts(int counts[]) {
    for (int i = 0; i < 26; i++)
    {
        if ((i + 1) % 5 == 0)
        {
            cout << counts[i] << "  " << static_cast<char>(i + 'a') << endl;
        }
        else
        {
            cout << counts[i] << "  " << static_cast<char>(i + 'a') << "        ";
        }
    }
}