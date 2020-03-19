// 8.5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;

void recursiveSelectionSort(char list[], int high)
{
    if (high > 0) {
        int indexOfMax = 0;
        char max = list[0];
        for (int i = 1; i <= high; i++)
        {
            if (list[i] > max)
            {
                max = list[i];
                indexOfMax = i;
            }
        }
        //swap the largest with the last element in the list
        list[indexOfMax] = list[high];
        list[high] = max;

        //sort the remaining list
        recursiveSelectionSort(list, high - 1);
    }
   
}

void recursiveSelectionSort(char list[]) {
    recursiveSelectionSort(list, strlen(list) - 1);
}

int binarySearch(const int list[], int key, int low, int high)
{
    //situation 1: the list has been exhausted without a match 
    if (low > high) {
        return -low - 1;
    }
    //other situations 
    int mid = (low + high) / 2;
    //situation 2.1
    if (key < list[mid])
    {
        return binarySearch(list, key, low, mid - 1);
    }
    //situation 2.2
    else if (key == list[mid])
    {
        return mid;
    }
    //situation 2.3
    else
    {
        return binarySearch(list, key, mid + 1, high);
    }


}

int binarySearch(const int list[], int key, int size)
{
    int low = 0;
    int high = size - 1;
    return binarySearch(list, key, low, high);
}

int main()
{
    /*8.5.1
    cout << "enter a string: ";
    char s[80];
    cin.getline(s, 80);

    recursiveSelectionSort(s);

    cout << "the sorted string is : " << s << endl;

    */

    //8.5.2
    int list[13];
    //enter the array
    for (int i =0; i < 13; i++)
    {
        cin >> list[i];
    }
    //ptint array
    for (int i = 0; i < 13; i++)
    {
        cout << list[i] << " ";
    }
    cout << "(list, 2, 13) " << binarySearch(list, 2, 13) << endl;
    cout << "(list, 11, 13) " << binarySearch(list, 11, 13) << endl;
    cout << "(list, 12, 13) " << binarySearch(list, 12, 13) << endl;
    
    return  0;
}