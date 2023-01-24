#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    const int size = 5;
    int arr2D[size][size];
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            arr2D[i][j] = rand() % 10;
            cout << arr2D[i][j] << ' ';
        }
        cout << endl;
    }
       
    int min, max;
    int sum = 0, avg;
    min = max = arr2D[0][0];
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            if (arr2D[i][j] > max)
            {
                max = arr2D[i][j];
            }
            if (arr2D[i][j] < min)
            {
                min = arr2D[i][j];
            }
            sum += arr2D[i][j];
            
        }
    }
    avg = sum / (size * size);
    cout << "Min = " << min << endl;
    cout << "Max = " << max << endl;
    cout << "Sum = " << sum << endl;
    cout << "AVG = " << avg << endl;
    return 0;
}