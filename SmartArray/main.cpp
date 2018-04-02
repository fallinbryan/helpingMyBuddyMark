//Example using a SmartArray class with a vector core.

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

        size = int(init.size());
        const T* iter = init.begin();
        array = new T[init.size()];
        for(int i = 0; i < size; i++){
            array[i] = iter[i];
        }
        calculateStats();

    }
    ~SmartArray() {
        delete array;
    }

    T& operator[] (int index ) {
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
