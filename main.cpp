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