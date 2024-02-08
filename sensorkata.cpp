#include <iostream>
#include <string>

using namespace std;

string sensorKata(string kalimat, string kata_yang_disensor, char karakter_untuk_sensor) {
    string hasil = kalimat;
    size_t pos = 0;

    while ((pos = hasil.find(kata_yang_disensor, pos)) != string::npos) {
        hasil.replace(pos, kata_yang_disensor.length(), kata_yang_disensor.length(), karakter_untuk_sensor);
        pos += kata_yang_disensor.length();
    }

    return hasil;
}

int main() {
    string kalimat, kata_yang_disensor;
    char karakter_untuk_sensor;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);
    cout << "Masukkan kata yang ingin disensor: ";
    cin >> kata_yang_disensor;
    cout << "Masukkan karakter untuk sensor: ";
    cin >> karakter_untuk_sensor;

    string hasil = sensorKata(kalimat, kata_yang_disensor, karakter_untuk_sensor);

    cout << "Hasil: " << hasil << endl;

    return 0;
}
