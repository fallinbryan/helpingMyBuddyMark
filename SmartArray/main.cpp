//Example using a SmartArray class with a vector core.

#include <iostream>
#include <vector>
using namespace std;

template <class T>
class SmartArray {
private:

    int sum;
    int size;
    double average;
    T array[];

public:

    SmartArray(initializer_list<T> init) : array(init) {
        sum = 0;
        average = 0.0;
        size = init.size();

        for(int i = 0; i < size; i++) {
            sum += array[i];
        }
        average = sum/array.size();
    }

    int getSum() {
        return sum;
    }
    double getAverage() {
        return average;
    }
};

int main() {
    SmartArray<int> mySmartArray = {12, 34, 56, 78};
    cout << "Sum: " << mySmartArray.getSum() << " Average: " << mySmartArray.getAverage() << endl;
    return 0;
}
