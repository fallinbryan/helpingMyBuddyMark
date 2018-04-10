#include <iostream>

using namespace std;

// declare a function to that will sort an arrary using the bubble sort algoritm
void bubbleSort(int* arr, int numElements);

// we would like an easy way to print an array
void printArray(int* arr, int numElements);

int main() {
	int X[] = { 28, 87, -3, 45, 19 };

	int numElements = sizeof(X)/sizeof(X[0])

	cout << "Array before sort" << endl;
	printArray(X,numElements);

	bubbleSort(X,numElements);  // because arrays are passed by reference, this will modify the array

	cout << "Array after sort" << endl;
	printArray(X,numElements);
}

// define our function to print an Array
void printArray(int* arr, int numElements) {
		for( int i = 0; i < numElements; i++) {
				cout << "array[" << i << "]: " << arr[i] << endl;
		}
}

// define our function to sort the array from smallest to largest
void bubbleSort(int* arr, int numElements) {
	int temp = 0;			// temporary bucket to hold a value for swapping
	bool sorted = false;	
	while(!sorted) {		// while the array is not sorted, keep sorting until it is sorted
		sorted = true;		// first we assume it is sorted
		for(int i = 0; i <= numElements-2;  i++) {
			for(int j = i+1; j < numElements; j++) {
				if(arr[i] > arr[j]) {  // but if we find somthing out of order
					sorted = false;    // obviously it isn't sorted, so set sorted to false 
					temp = arr[i];	   //  and then proceed to swap out of order elements
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
}

