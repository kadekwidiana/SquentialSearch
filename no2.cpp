#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string kalimat, kata;

    cout << "Masukkan Kalimat: ";
    getline(cin, kalimat);

    cout << "Masukkan Kata yang ingin dicari: ";
    cin >> kata;

    transform(kalimat.begin(), kalimat.end(), kalimat.begin(), ::tolower);
    transform(kata.begin(), kata.end(), kata.begin(), ::tolower);

    vector<string> kata_list;
    string temp = "";

    for (int i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] == ' ') {
            kata_list.push_back(temp);
            temp = "";
        }
        else {
            temp += kalimat[i];
        }
    }
    kata_list.push_back(temp);

    bool ditemukan = false;
    vector<int> baris;

    for (int i = 0; i < kata_list.size(); i++) {
        if (kata_list[i] == kata) {
            baris.push_back(i+1);
            ditemukan = true;
        }
    }

    if (ditemukan) {
        cout << "Kata '" << kata << "' ada pada kalimat tersebut" << endl;
        cout << "Kata '" << kata << "' ditemukan pada baris ke ";
        for (int i = 0; i < baris.size(); i++) {
            cout << baris[i];
            if (i < baris.size()-1) {
                cout << ", ";
            }
        }
        cout << endl;
    }
    else {
        cout << "Kata '" << kata << "' tidak ditemukan dalam kalimat tersebut" << endl;
    }

    return 0;
}
