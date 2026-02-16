// COMSC-210 | Lab 6 | Barsbek
#include <iostream>
using namespace std;

void enterArrayData(double* arr, int size);
void outputArrayData(const double* arr, int size);
double sumArray(const double* arr, int size);

int main() {
    const int SIZE{5};

    double* data{new double[SIZE]};
    enterArrayData(data, SIZE);
    outputArrayData(data, SIZE);
    cout << "Sum of values: " << sumArray(data, SIZE) << '\n';

    delete[] data;
    return 0;
}

// enterArrayData() fills a dynamic array with userInput
// arguments: double* arr, int size
void enterArrayData(double *arr, int size) {
    double userInput{};
    cout << "Data entry for the array:\n";
    for (int i{0}; i < size; ++i) {
        cout << "\t > Element #" << i << ": ";
        cin >> userInput;
        *(arr + i) = userInput;
    }
    cout << "Data entry complete.\n";
}

// outputArrayData() outputs array elements
// arguments: const double* arr, int size
void outputArrayData(const double* arr, int size) {
    cout << "Outputting array elements: ";
    for (int i{0}; i < size; ++i)
        cout << *(arr + i) << " ";
    cout << '\n';
}

// sumArray() calculates the sum of all elements
// arguments: const double* arr, int size
// return: double sum of values in the array
double sumArray(const double* arr, int size) {
    double sum{};
    for (int i{0}; i < size; ++i)
        sum += *(arr + i);
    return sum;
}
