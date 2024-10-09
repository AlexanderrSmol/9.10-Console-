#include <iostream>
#include <windows.h>;
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int m = 3;
    const int n = 5;

    int arr1[m][n] = 
    { 
        {  1,15, 2, 7,12},
        {  6, 5,-5, 0, 3},
        {-23, 8,12,-4,-3} 
    };

    // Задание 1
    int sum = 0;
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            sum += arr1[i][j];
        }
    }
    cout << "Сумма всех элеметов = " << sum << endl;

    // Задание 2
    float mean = sum / (float)(m * n);
    cout << "Среднее значение = " << mean << endl;

    // Задание 3
    cout << "Положительные:" << endl;
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (arr1[i][j] > 0) cout << arr1[i][j] << ", ";
        }
    }
    cout << endl;

    cout << "Отрицательные:" << endl;
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (arr1[i][j] < 0) cout << arr1[i][j] << ", ";
        }
    }
    cout << endl;
}