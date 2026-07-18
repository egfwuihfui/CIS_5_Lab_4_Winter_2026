#include <iostream>
using namespace std;

int calculateSum(const int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}

double getAverage(int sum, int size)
{
    double average = static_cast<double>(sum) / size;
    return average;
}

void addBonus(int array[], int size, int bonus = 5)
{
    for (int i = 0; i < size; i++)
    {
        array[i] += bonus;
        cout << array[i] << " ";
    }
    cout << endl;
}

int findHighest(const int* array, int size)
{
    int highest = *array;
    for (int i = 0; i < size; i++)
    {
        if (*(array + i) > highest)
        {
            highest = array[i];
        }
    }
    return highest;
}

int countPassed(const int array[], int size)
{
    int passNum = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] >= 70)
        {
            passNum += 1;
        }
    }
    return passNum;
}

int main()
{
    int array[5] = {65, 82, 90, 45, 78};
    int size = 5;

    cout << "original score:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "Sum:" << endl;
    int sum = calculateSum(array, size);
    cout << sum << endl;

    cout << "Average:" << endl;
    double average = getAverage(sum, size);
    cout << average << endl;

    cout << "Bonus scores:" << endl;
    addBonus(array, size);   

    cout << "Highest score: " << endl;
    int highest = findHighest(array, size);
    cout << highest << endl;

    cout << "Pass number:" << endl;
    int passNum = countPassed(array, size);
    cout << passNum << endl;

    return 0;
}