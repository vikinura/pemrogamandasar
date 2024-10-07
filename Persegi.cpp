#include <iostream>  // untuk input dan output

using namespace std;

int main() {
    // Deklarasi variabel untuk menyimpan sisi persegi
    float sisi, luas;

    // Meminta input 
    cout << "Masukkan panjang sisi persegi: ";
    cin >> sisi;

    // Menghitung luas persegi
    luas = sisi * sisi;

    // Menampilkan hasil perhitungan
    cout << "Luas persegi adalah: " << luas << endl;

    return 0;
}