#include <iostream>
using namespace std;

template <typename T>
void printArray(T *arr)
{
	cout << "Array :: ";
	for (int i = 0; i < 5; i++)
		cout << arr[i] << " ";
	cout << endl;
}

template <>
void printArray(string* arr)
{
	cout << "Array :: ";
	for (int i = 0; i < 4; i++)
		cout << arr[i] << " ";
	cout << endl;
}

template <typename T>
void selectionSort(T* arr)
{
	for (int i = 0; i < 5; i++)
	{
		int max = 0, maxindex;

		for(int j = i;j<5;j++)
			if (arr[j] > max)
			{
				max = arr[j];
				maxindex = j;
			}
		swap(arr[i], arr[maxindex]);
	}
}

template <>
void selectionSort(string* arr)
{
	for (int i = 0; i < 4; i++)
	{
		int max = 0, maxindex;

		for (int j = i; j < 4; j++)
			if (strlen(arr[j].c_str()) > max)
			{
				max = strlen(arr[j].c_str());
				maxindex = j;
			}
		swap(arr[i], arr[maxindex]);
	}
}

int main() {
	// Test with an integer array of size 5 
	int intArray[5] = { 64, 25, 12, 22, 11 };
	cout << "Original integer array: ";
	printArray(intArray);
	selectionSort(intArray);
	cout << "Sorted integer array: ";
	printArray(intArray);
	// Test with a string array of size 4 
	string stringArray[4] = { "apple", "orange", "banana", "grape" };
	cout << "\nOriginal string array: ";
	printArray(stringArray);
	selectionSort(stringArray);
	cout << "Sorted string array: ";
	printArray(stringArray);
	return 0;
}