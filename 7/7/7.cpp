// 7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//progame list 7.1 - 7.5

#include <iostream>
using namespace std;
// 7-5 

int* reverse(const int* list, int size)
{
	int* result = new int[size];
	for (int i = 0, j = size - 1; i < size; i++, j--)
	{
		result[j] = list[i];
	}
	return result;
}
	
void printArray1(const int *array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i]<<"   ";
	}
}

int main()
{
	int list[] = { 1,2,3,4,5,6 };
	int *plist = reverse(list, 6);
	printArray1(plist, 6);
	delete plist;
	return 0;
}



/*
//7-4
int main()
{
	int list[6] = { 1, 2, 3, 4, 5, 6 };
	int* plist = list;

	for (int i = 0; i < 6; i++)
	{
		cout << " address of " << list + i << " value " << *(list + i) << endl;
		cout << " i is " << i << " value is " << list[i] << endl;
		cout << " value is " << *(plist + i) << " value is " << plist[i] << endl;
		cout << "plist is " << plist;
	}
}


//7-3
int main()
{
	int list[6] = { 1, 2, 3, 4, 5, 6 };

	for(int i = 0; i < 6; i++)
	{
		cout << " address of " << list + i << " value " << *(list + i) << endl;
		cout << " i is " << i << " value is " << list[i] <<endl;
	}
}


//swap 2 variables 7-2
//without *(point) the value won't be changed
void swap(int *pvalue1, int *pvalue2)
{
	/*
	int temp = pvalue1;
	pvalue1 = pvalue2;
	pvalue2 = temp;
	//
	int temp = *pvalue1;
	*pvalue1 = *pvalue2;
	*pvalue2 = temp;
}

int main()
{
	int n1 = 5;
	int n2 = 3;
	swap(n1, n2);
	cout << n1 << "  " << n2;
}
*/