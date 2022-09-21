#include <iostream>
using namespace std;

void swap (int &a, int &b) {
    int x = a;
    a = b;
    b = x;
}

void reverseArray(int *pointer, int sizeArray) {

    int iCount = sizeArray / 2;
    for (int i = 0, j = (sizeArray - 1); i < iCount; i++, j--) {
        swap(*(pointer + i), *(pointer + j));
    }
}

int main() {

    int array [] {10,20,30,40,50,60,70,80,90,100};
    int sizeArray = sizeof (array) / sizeof (int);
    int* pInt = array;

    cout << endl;
    cout << "Размер массива = " << sizeArray << endl;
    cout << "Массив на входе: { ";
    for (int i = 0; i < sizeArray; i++)
        cout << *(pInt + i) << " ";
    cout << "}\n";

    reverseArray(array, sizeArray);

    cout << "Массив на выходе: { ";
    for (int i = 0; i < sizeArray; i++)
        cout << *(pInt + i) << " ";
    cout << "}\n";


    return 0;
}
