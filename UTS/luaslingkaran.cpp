#include <iostream>
using namespace std;

int main() {
    double jarijari, luas;
    cout << "Masukkan panjang jari-jari lingkaran: ";
    cin >> jarijari;
    luas = 3.14 * jarijari * jarijari;
    cout << "Luas lingkaran dengan jari-jari " << jarijari << " adalah: " << luas << endl;
    return 0;
}
