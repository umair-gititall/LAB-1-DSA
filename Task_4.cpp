#include <iostream>
using namespace std;

int binarySearch(int* arr, int element)
{
	int low = 0, high = 4, mid;

	while (true)
	{
		mid = (high + low) / 2;

		if (arr[mid] > element)
			low = mid + 1;
		else if (arr[mid] < element)
			high = mid - 1;
		else
			return mid;
	}
}

int binarySearch(float* arr, float element)
{
	int low = 0, high = 4, mid;

	while (true)
	{
		mid = (high + low) / 2;

		if (arr[mid] > element)
			low = mid + 1;
		else if (arr[mid] < element)
			high = mid - 1;
		else
			return mid;
	}
}

int binarySearch(string* arr, string element)
{
	int low = 0, high = 4, mid;

	while (true)
	{
		mid = (high + low) / 2;

		if (arr[mid][0] > element[0])
			low = mid + 1;
		else if (arr[mid][0] < element[0])
			high = mid - 1;
		else
			return mid;
	}
}

template <typename T>
void printSearchResult(int index, T key)
{
	cout << "Value :: " << key << " --> Index :: " << index << endl;
}

template <>
void printSearchResult(int index, int key)
{
	cout << "Value :: " << key << " --> Index :: " << index << endl;
}

int main() {
	// Test with an integer array (sorted) of size 5 
	int intArray[5] = { 11, 12, 22, 25, 64 };
	int intKey = 22;
	int intIndex = binarySearch(intArray, intKey);
	printSearchResult(intIndex, intKey);
	// Test with a float array (sorted) of size 4 
	float floatArray[4] = { 0.57, 1.62, 2.71, 3.14 };
	float floatKey = 2.71;
	int floatIndex = binarySearch(floatArray, floatKey);
	printSearchResult(floatIndex, floatKey);
	// Test with a string array (sorted) of size 4 
	string stringArray[4] = { "apple", "banana", "grape", "orange"};
	string stringKey = "grape";
	int stringIndex = binarySearch(stringArray, stringKey);
	printSearchResult(stringIndex, stringKey);
	return 0;
}