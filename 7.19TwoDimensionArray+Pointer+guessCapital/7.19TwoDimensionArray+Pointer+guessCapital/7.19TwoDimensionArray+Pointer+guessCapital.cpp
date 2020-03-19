// 7.19TwoDimensionArray+Pointer+guessCapital.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;

void askQuestion(string s[3][2], int questionNumber)
{
    //questionNumber is the Question that you need to answer
    //so this is size of array
    cout << "what is the capital of" << s[questionNumber][0] << " ?" << endl;
}

void check_answer(string a, string s[3][2], int questionNumber)
{
    if (a == s[questionNumber][1])
    {
        cout << "ur answer is correct" << endl;
    }
    else
    {
        cout << "the capital of " << s[questionNumber][0] << " is " << s[questionNumber][1] << endl;
    }
}
int main()
{
    // set the answer
    //!!!string with"" char with ''!!!
    string a[3][2] = {
    {"Alabama","Montgomery"},
    {"Alaska","Juneau"},
    {"Arizona","Phoenix"},
    };
    //declare answer as a string
    string answer;
    for (int i = 0; i < 3; i++)
    {
        askQuestion(a, i);
        cin >> answer;
        check_answer(answer, a, i);
    }
    

}