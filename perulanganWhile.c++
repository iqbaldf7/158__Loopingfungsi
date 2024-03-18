#include <iostream>
using namespace std;

int main() {
    int bilangan;

    srand(time(0));

    bilangan = rand() % 12;

    while (bilangan % 2) {
        cout << bilangan << endl;
        cout << "Maka Bilangannya Genap" << endl;

        bilangan = rand() % 12;
    }

    cout << bilangan << endl;
    cout << "Bilangannya Ganjil" << endl;
