// COMSC-210 | Lab 6 | Barsbek
#include <iostream>
using namespace std;

void enterArrayData(double* arr, int size); //

int main() {
    const int SIZE{5};

    double* data{new double[SIZE]};
    enterArrayData(data, SIZE);

    delete[] data;
    return 0;
}

void enterArrayData(double *arr, int size) {
    cout << "Data entry for the array:";
    for (int i{0}; i < size; ++i) {
        
    }

}