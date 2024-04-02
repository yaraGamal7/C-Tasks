#include <iostream>

using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int *array = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter the value of array[" << i+1 << "]: "<< endl;
        cin >> array[i];
    }


    cout << "Array values: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    delete[] array;

    return 0;
}
