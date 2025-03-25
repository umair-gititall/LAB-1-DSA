#include <iostream>
using namespace std;

template <typename T>
int linearSearch(T* arr, T element)
{
	for (int i = 0; i < 4; i++)
		if (arr[i] == element)
			return i;
}

template <>
int linearSearch(int* arr, int element)
{
	for (int i = 0; i < 5; i++)
		if (arr[i] == element)
			return i;
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
	// Test with an integer array of size 5 
	int intArray[5] = { 64, 25, 12, 22, 11 };
	int intKey = 12;
	int intIndex = linearSearch(intArray, intKey);
	printSearchResult(intIndex, intKey);
	// Test with a float array of size 4 
	float floatArray[4] = { 3.14, 2.71, 1.62, 0.57 };
	float floatKey = 1.62;
	int floatIndex = linearSearch(floatArray, floatKey);
	printSearchResult(floatIndex, floatKey);
	// Test with a string array of size 4 
	string stringArray[4] = { "apple", "orange", "banana", "grape" };
	string stringKey = "banana";
	int stringIndex = linearSearch(stringArray, stringKey);
	printSearchResult(stringIndex, stringKey);
	return 0;
}