#include <iostream>
#include <string>

using namespace std;

// Definisikan struct untuk menyimpan data mahasiswa
struct Mahasiswa {
    string nim;
    string nama;
    double nilai_pemrograman;
};

int main() {
    const int jumlah_mahasiswa = 10;
    Mahasiswa daftar_mahasiswa[jumlah_mahasiswa];

    // Input data untuk setiap mahasiswa
    for (int i = 0; i < jumlah_mahasiswa; ++i) {
        cout << "Masukkan data untuk mahasiswa ke-" << i+1 << ":" << endl;
        cout << "NIM: ";
        cin >> daftar_mahasiswa[i].nim;
        cout << "Nama: ";
        cin.ignore(); // Membersihkan buffer sebelum membaca string
        getline(cin, daftar_mahasiswa[i].nama);
        cout << "Nilai Pemrograman: ";
        cin >> daftar_mahasiswa[i].nilai_pemrograman;
    }

    // Hitung nilai rata-rata
    double total_nilai = 0;
    for (int i = 0; i < jumlah_mahasiswa; ++i) {
        total_nilai += daftar_mahasiswa[i].nilai_pemrograman;
    }
    double nilai_rata_rata = total_nilai / jumlah_mahasiswa;

    // Tampilkan hasil
    cout << "\nNilai rata-rata dari " << jumlah_mahasiswa << " mahasiswa adalah: " << nilai_rata_rata << endl;

    return 0;
}
