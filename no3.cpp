#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat;
    int jumlah_vokal = 0, jumlah_konsonan = 0, jumlah_angka = 0;

    cout << "Masukkan kalimat : ";
    getline(cin, kalimat);

    for (int i = 0; i < kalimat.length(); i++) {
        char huruf = tolower(kalimat[i]);

        if (huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o') {
            jumlah_vokal++;
        } else if (isdigit(huruf)) {
            jumlah_angka++;
        } else if (huruf >= 'a' && huruf <= 'z') {
            jumlah_konsonan++;
        }
    }

    cout << "Jumlah huruf vokal : " << jumlah_vokal << endl;
    cout << "Jumlah huruf konsonan : " << jumlah_konsonan << endl;
    cout << "Jumlah angka : " << jumlah_angka << endl;
    cout << "Jumlah semua karakter : " << kalimat.length() << endl;

    return 0;
}
