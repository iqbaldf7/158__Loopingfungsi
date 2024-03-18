#include <iostream>
using namespace std;

string nama;
int nXpander, nPorsche, nBrio, nLamborghini, nAvanza;
int hXpander = 300, hPorsche = 8000, hAvanza = 250, hBrio = 200, hLamborghini = 6000;

void input() {
    cout << "Nama pembeli : ";
    cin >> nama;
    cout << "Jumlah xPander : ";
    cin >> nXpander;

    cout << "Jumlah Porsche : ";
    cin >> nPorsche;

    cout << "Jumlah Avanza : ";
    cin >> nAvanza;

    cout << "Jumlah Brio : ";
    cin >> nBrio;

    cout << "Jumlah Lamborghini : ";
    cin >> nLamborghini;

}
int TotalHarga() {
    return (nXpander * hXpander) + (nPorsche * hPorsche) + (nAvanza * hAvanza) + (nBrio * hBrio) + (nLamborghini * hLamborghini);
}
void Display() {
    cout << "Total Harganya : " << TotalHarga() << endl;
}

int main() {
    char pilihan;
    do {
        input();
        Display();
        cout << " Apakah ingin membeli kembali ? ";
        cin >> pilihan;
    } while (pilihan == 'y' || pilihan == 'Y');

}
