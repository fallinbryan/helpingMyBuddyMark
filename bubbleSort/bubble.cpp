#include <iostream>

using namespace std;

void bubbleSort(int* arr, int numElements);
void printArray(int* arr, int numElements);

int main() {
	int X[] = { 28, 87, -3, 45, 19 };

	int numElements = sizeof(X)/sizeof(X[0]);
	cout << "Array before sort" << endl;
	printArray(X,numElements);
	bubbleSort(X,numElements);
	cout << "Array after sort" << endl;
	printArray(X,numElements);
}

void printArray(int* arr, int numElements) {
		for( int i = 0; i < numElements; i++) {
				cout << "array[" << i << "]: " << arr[i] << endl;
		}
}

void bubbleSort(int* arr, int numElements) {
	int temp = 0;
	bool sorted = false;
	while(!sorted) {
		sorted = true;
		for(int i = 0; i <= numElements-2;  i++) {
			for(int j = i+1; j < numElements; j++) {
				if(arr[i] > arr[j]) {
					sorted = false;
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
}

