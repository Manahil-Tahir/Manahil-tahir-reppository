#include<iostream>
using namespace std;

int main()
{
	int rows;
	int cols;
	cout << "Enter the number of rows: ";
	cin >> rows;
	cout << "Enter the number of columns: ";
	cin >> cols;

	int array[rows][cols];
	int sum = 0;
	double average;

	cout << "Enter elements of the array:\n";
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			cout << "Element[" << i << "][" << j << "]: ";
			cin >> array[i][j];
			sum += array[i][j];
		}	
	}

	
	average = (sum) / (rows * cols);

	
	cout << "\nThe 2D array is:\n";
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

	cout << "\nSum of all elements: " << sum << endl;
	cout << "Average of all elements: " << average << endl;

	return 0;
}