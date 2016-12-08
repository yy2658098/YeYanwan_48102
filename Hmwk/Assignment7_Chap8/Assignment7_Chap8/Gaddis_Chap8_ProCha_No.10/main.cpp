/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on December 6, 2016, 6:00 PM
 */

#include<iostream>
#include <iomanip>
using namespace std;

void bubbleSort(int [], int);
void selectionSort(int [], int);
void showArray(int [], int);

int main()
{
	const int SIZE = 8;
	int arr1[SIZE] = { 105, 102, 107, 103, 106, 100, 104, 101 };
	int arr2[SIZE] = { 105, 102, 107, 103, 106, 100, 104, 101 };

	bubbleSort(arr1, SIZE);

	cout << endl;

	selectionSort(arr2, SIZE);

	return 0;
}


void bubbleSort(int values[], int size)
{
	bool swap;
	int temp;
	int pass = 1;

	cout << "Now performing the bubble sort\n";
	cout << "------------------------------\n";

	do
	{
		swap = false;

		for (int count = 0; count < (size - 1); count++)
		{
			if (values[count] > values[count + 1])
			{
				temp = values[count];
				values[count] = values[count + 1];
				values[count + 1] = temp;
				swap = true;
			}

			// Display the array contents after this pass.
			cout << "After pass " << pass << ": ";
			showArray(values, size);
			pass++;
		}

	} while (swap);
}


void selectionSort(int values[], int size)
{
	int startScan, minIndex, minValue;
	int pass = 1;

	cout << "Now performing the selection sort\n";
	cout << "---------------------------------\n";

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = values[startScan];

		for(int index = startScan + 1; index < size; index++)
		{
			if (values[index] < minValue)
			{
				minValue = values[index];
				minIndex = index; 
			}
		}

		values[minIndex] = values[startScan];
		values[startScan] = minValue;

		// Display the array contents after this pass.
		cout << "After pass " << pass << ": ";
		showArray(values, size);
		pass++;
	}
}


void showArray(int values[], int size)
{
	for (int count = 0; count < size; count++)
		cout << values[count] << " ";

	cout << endl;
}

