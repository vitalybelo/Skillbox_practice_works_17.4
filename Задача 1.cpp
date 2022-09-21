#include <iostream>
using namespace std;

void swap1 (int &a, int &b) {
    int x = a;
    a = b;
    b = x;
}

void swap2 (int* a, int* b) {
    int x = *a;
    *a = *b;
    *b = x;
}

int main() {

    int a = 10;
    int b = 20;

    cout << endl;
    cout << "Было: a = " << a << ", b = " << b << endl;

    swap1 (a, b);
    cout << "Стало: a = " << a << ", b = " << b << endl;

    swap2 (&a, &b);
    cout << "Стало было: a = " << a << ", b = " << b << endl;

    return 0;
}
