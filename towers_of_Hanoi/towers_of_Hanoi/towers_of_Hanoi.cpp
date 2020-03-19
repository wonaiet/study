// towers_of_Hanoi.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std; 

//the function for finding the solution to move n disks
//from fromTower to toTower with auxTower

//the times of dises moves
int m = 0;
void moveDisks(int n, char fromTower, char toTower, char auxTower) {
    //base case (stop condition)
    if (n == 1) {
        cout << "move disk " << n << " from " << fromTower << " to " << toTower << endl;
        m++;
    }
    else
    {
        moveDisks(n - 1, fromTower, auxTower, toTower);
 //       m++; cannot be here , since we already have base case ++
//if we have m++ here, m need to plus 1 after recursive function
        cout << "move disk " << n << " from " << fromTower << " to " << toTower << endl;
        moveDisks(n - 1, auxTower, toTower, fromTower);
        m++;
    }
}

int main()
{
    //read number of disks
    int n;
    cout << "enter number of disks: ";
    cin >> n;

    moveDisks(n, 'a', 'b', 'c');
    cout << "the diskes moved " << m << "times";

    return 0;
}