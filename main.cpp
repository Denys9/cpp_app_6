#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	double max, min;
	int sum, avg;
	srand(time(0));
	const int size = 6;
	int arr2D[size][size];
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
			avg = sum / 36;



		}



	}
	cout << endl;
	cout << "Min = " << min << endl;
	cout << "Max = " << max << endl;
	cout << "Sum = " << sum << endl;
	cout << "AVG = " << avg << endl;
	return 0;

}