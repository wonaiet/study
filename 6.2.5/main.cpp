#include <iostream>

using namespace std;

void selectionsort(double lista[],int arraySize)
{
    for (int i = arraySize - 1; i >= 1;i--)
    {
        double currentMax = lista[0];
        int currentMaxIndex = 0;

        for (int j = 1; j <= i; j++)
        {
            if (currentMax < lista[j])
            {
                currentMax = lista[j];
                currentMaxIndex = j;
            }
        }
     //   cout << currentMax << " currentMax      ";
     //   cout << currentMaxIndex << " currentMaxIndex      ";

        if (currentMaxIndex != i)
        {
            lista[currentMaxIndex] = lista[i];
            lista[i] = currentMax;// cannot reverse line 22 and 23
        }
        cout << lista[i] << ", ";
    }
}

int main()
{
    double listi[] = {2, 1, 4, 8,5,3.8, 8, 9, 8};
    int arraySize = 9;
    selectionsort(listi,arraySize);
 //   cout << listi;
}



/* binary Search 6.8
int binarySearch(int lista[], int key, int arraySize)
{
    int low = 0;
    int high = arraySize -1;


    while (high >= low)
    {
        int mid = (low + high) /2;
        if (key < lista[mid])
        {
            high = mid - 1;

        }
        else if (key > lista[mid])
        {
            low = mid + 1;

        }
        else
        {
            return mid;
        }
        cout << "high is " << high;
        cout << "low is " << low;
        cout << "mid is " << mid;

    }
    return -1;
}

int main()
{
    int listi[] = {1, 2, 3, 4,5,8, 8, 8, 8};
    int i = binarySearch(listi, 4, 9);
    cout << i;
}


int BinarySearch(int array[], int n, int value)
{
    int left = 0;
    int right = n - 1;
    //如果这里是int right = n 的话，那么下面有两处地方需要修改，以保证一一对应：
    //1、下面循环的条件则是while(left < right)
    //2、循环内当 array[middle] > value 的时候，right = mid

    while (left <= right)  //循环条件，适时而变
    {
        int middle = left + ((right - left) >> 1);
        cout << "middle is " << middle <<endl;  //防止溢出，移位也更高效。同时，每次循环都需要更新。
        if (array[middle] > value)
            right = middle - 1;  //right赋值，适时而变
        else if (array[middle] < value)
            left = middle + 1;
        else
            return middle;
        //可能会有读者认为刚开始时就要判断相等，但毕竟数组中不相等的情况更多
        //如果每次循环都判断一下是否相等，将耗费时间
        cout << "middle is " << middle <<endl;
        cout << "left is " << left <<endl;
        cout << "right is " << right <<endl;
    }
    return -1;
}




6.7 linear search


int linearSearch(int listi[],int key, int arrarySize)
{
    for (int i = 0; i < arrarySize; i++)
    {
        if (key == listi[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int listi[] = {1, 2, 3, 4, 8};
    int i = linearSearch(listi, 4, 8);
    cout << i;
}

6.6

 void reverseL(const int listA[], int newL[], int sizeOfArray)
{
    for (int i = 0, j = sizeOfArray - 1; i < sizeOfArray; i++, j--)
    {
        newL[j] = listA[i];
    }
}

void printArray(const int listA[], int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << listA[i] <<"   ";
    }
}

int main()
{
    int sizeOfArray = 6;
    int listA[] = {1, 2, 3, 4, 5, 6};
    int newlist[6];
    reverseL(listA, newlist, sizeOfArray);
    cout << "the original array is ";
    printArray(listA, sizeOfArray);
    cout <<endl;
    cout << "the reversed array is ";
    printArray(newlist, sizeOfArray);
    cout <<endl;
}

6.3
void printArray(int [], int );

int main()
{
    int numbers[5] = {1, 4, 3, 6, 8};
    printArray(numbers, 5);

    return 0;
}

void printArray(int list[], int arrarySize)
{
    for (int i = 0; i < arrarySize; i++)
    {
        cout << list[i] << "  ";
    }
}



6.2.7
int main ()
{
    // maximum number of students
    const int NUMBER_of_students = 6;
    int scores[NUMBER_of_students];
    int best = 0;
    char grade;

    //read scores and find the best score
    for (int i = 0;i < NUMBER_of_students; i++)
    {
        cout << "enter score";
        cin >> scores[i];
        if(scores[i] > best);
        {
            best = scores[i];
        }
    }

    //assign and display grades
    for (int i = 0; i < NUMBER_of_students; i++)
    {
        if (scores[i] >= best - 10)
        {
            grade = 'A';
        }
        else if (scores[i] >= best - 20)
        {
            grade = 'B';
        }
        else if (scores[i] >= best - 30)
        {
            grade = 'C';
        }
        else if (scores[i] >= best - 40)
        {
            grade = 'D';
        }
        else
        {
            grade = 'F';
        }
        cout << "student "<< i << "score is " << scores[i] << "grade is " << grade << "\n";
    }

}





6.2.5
int main()
{
    const int TOTAL_NUMBERS = 6;
    int numbers[TOTAL_NUMBERS];

    //read all numbers
    for (int i = 0; i< TOTAL_NUMBERS; i++)
    {
        cout <<"enter a number ";
        cin >> numbers[i];
    }

    //find the max
    int maxN = numbers[0];
    for (int i = 1; i < TOTAL_NUMBERS; i++)
    {
        if (maxN < numbers[i])
        {
            maxN = numbers[i];
        }
    }

    // find the occurrence of the largest number
    int count = 0;
    for (int i = 0; i < TOTAL_NUMBERS; i++)
    {
        if (numbers[i] == maxN)
        {
            count ++;
        }
    }

    //display the results;
    cout << "the array is ";
    for (int i = 0; i < TOTAL_NUMBERS; i++)
    {
        cout << numbers[i] << "  ";
    }
    cout << "the biggest number is "<< maxN;
    cout << "the occurrence of biggest number is "<< count;


    return 0;
}
*/
