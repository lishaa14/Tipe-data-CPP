#include <iostream>

using namespace std;

int main() {
    string nama;
    string jurusan;
    int umur;
    float tinggibadan;

    cout << "masukan nama: ";
    getline(cin, nama);

    cout << "masukan jurusan: ";
    getline(cin, jurusan);

    cout << "masukan umur: ";
    cin >> umur;

    cout << "masukan tinggi badan: ";
    cin >> tinggibadan;

    cout << "\n=== DATA ANDA ===\n";
    cout << "Nama          : " << nama << endl;
    cout << "Jurusan       : " << jurusan << endl;
    cout << "Umur          : " << umur << endl;
    cout << "Tinggi Badan  : " << tinggibadan << " cm" << endl;

    return 0;
}