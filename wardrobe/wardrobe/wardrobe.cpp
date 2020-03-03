#include <iostream>

using namespace std;

int main()
{
	int wardrobe[100], change[100];

	// declare change times of wardrobe
	//for student 1 as 0 times,the second student as 1 time
	// so we start at second one 
	//DO NOT FORGET TO MIUNS 1
	for (int i = 0; i < 100; i++)
	{
		change[i] = 1;
	}

	// caculate the times of change of each wardrobe
	//i for student, n for change[n]
	// in loop from 2 to 99
	for (int i = 2; i < 100; i++)
	{
		for (int n = 0; n < 100; n++)
		{
			if ((n - i + 1) % i == 0)
			{
				change[n]++;
			}
		}
	}

	// for S100
	change[99]++;
	
	// tell which wardrobe to close
	for (int i = 0; i < 100; i++)
	{
		if (change[i] % 2 == 0)
		{
			wardrobe[i] = 0;
		}
		else
		{
			wardrobe[i] = 1;
		}
	}
	// give wardrobe 0 and 1 meaning
	for (int i = 0; i < 100; i++)
	{
		if (wardrobe[i] == 0)
		{
			// << "wardrobe " << i + 1 << " is closed" << endl;
		}
		else 
		{
			cout << "wardrobe " << i + 1 << " is opened" << endl;
		}
	}

	return 0;
}
