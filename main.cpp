// COMSC-210 | Lab 6 | Barsbek
#include <iostream>
using namespace std;

void enterArrayData(double* arr, int size);
void outputArrayData(const double* arr, int size);

int main() {
    const int SIZE{5};

    double* data{new double[SIZE]};
    enterArrayData(data, SIZE);
    outputArrayData(data, SIZE);

    delete[] data;
    return 0;
}

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

void outputArrayData(const double* arr, int size) {
    cout << "Outputting array elements: ";
    for (int i{0}; i < size; ++i)
        cout << *(arr + i) << " ";
    cout << '\n';
};