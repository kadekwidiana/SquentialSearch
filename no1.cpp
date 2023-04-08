#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string kata, karakter;
    bool ditemukan = false;
    vector<int> baris;

    cout << "Masukkan kata : ";
    getline(cin, kata);

    if (kata.empty()) {
    	cout << "Anda belum memasukan kata, Silahkan masukan kata!" << endl;
        return 0;
    }

    cout << "Masukkan karakter yang ingin dicari : ";
    cin >> karakter;

    for (int i = 0; i < kata.length(); i++) {
        if (kata[i] == karakter[0]) {
            baris.push_back(i / (count(kata.begin(), kata.end(), '\n') + 1) + 1);
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Karakter '" << karakter << "' tidak ada dalam kata tersebut" << endl;
    } else {
        cout << "Karakter '" << karakter << "' ada dalam kata tersebut" <<endl;
        cout << "Karakter '" << karakter << "' ditemukan pada baris : ";
        for (int i = 0; i < baris.size(); i++) {
            cout << baris[i];
            if (i < baris.size()-1) {
                cout << ", ";
            }
        }
    }
 
    return 0;
}
