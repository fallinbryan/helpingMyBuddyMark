//
// Created by Bryan on 4/1/2018.
//

#include<iostream>
template<int N>
void swapDigits(int  (&array)[N]);
template<int N>
void printArray(int (&array)[N]);

int main() {
    int arry[] = {1,2,3,4,5,6,7,8,9,10};
    std::cout << "Array before swap." << std::endl;
    printArray(arry);
    swapDigits(arry);
    std::cout << "Array after swap." << std::endl;
    printArray(arry);
    return 0;
}
template<int N>
void printArray(int  (&array)[N]) {
    for(int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        std::cout << "Array[" << i << "] = " << array[i] << std::endl;
    }
}
template<int N>
void swapDigits(int  (&array)[N]) {
    int lastIndex = sizeof(array)/sizeof(array[0]) -1;
    int temp = 0;
    for(int i = 0; i < (  (sizeof(array) / sizeof(array[0]))  / 2 ); i++) {
        temp = array[i];
        array[i] = array[lastIndex];
        array[lastIndex] = temp;
        lastIndex--;


    }
}