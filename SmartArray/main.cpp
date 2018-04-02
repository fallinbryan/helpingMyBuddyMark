//Example of a Smart Array class.
#include <iostream>

using namespace std;

template <class T>
class SmartArray {
private:

    int sum;
    int size;
    double average;
    T* array;

    void calculateStats() {
        sum = 0;
        average = 0.0;
        for(int i = 0; i < size; i++) {
            sum += array[i];
        }
        average = sum/size;
    }

public:

    SmartArray(initializer_list<T> init)  { //initializer list allows array = {x,y,x};
        //an array that knows it's own size is a smart array
        size = int(init.size());
        //this grabs a pointer from the start of the initializer_list
        const T* iter = init.begin();
        // this 'new' keyword allocates memory from the heap.  we must release when
        // we terminate the program.  That is done in the class destructor.
        array = new T[init.size()];
        for(int i = 0; i < size; i++){
            array[i] = iter[i];
        }
        calculateStats();

    }
    // this a destructor.  it makes sure we free up allocated memory so our
    // program does not have a memory leak and eventually crash the entire computer
    ~SmartArray() {
        delete array;
    }

    //this is operator overloading.  google c++ operator overloading
    T& operator[] (int index ) {
        // this is the smart bit that won't allow the smart array to access memory it isn't supposed to.
        if(index >= size) {
            throw "Array index out of bounds";
        }
        calculateStats();
        return array[index];
    }

    int getSum() {
        return sum;
    }
    double getAverage() {
        return average;
    }
    int getSize() {
        return size;
    }
};

int main() {
    SmartArray<int> mySmartArray = {12, 34, 56, 78};
    cout << "Sum: " << mySmartArray.getSum() << " Average: " << mySmartArray.getAverage() << endl;
    mySmartArray[0] = 5; //demonstrates the smart array behaves like a regular array

    cout << "Sum: " << mySmartArray.getSum() << " Average: " << mySmartArray.getAverage() << endl;

    return 0;
}
