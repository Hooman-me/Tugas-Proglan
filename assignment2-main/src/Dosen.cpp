#include <iostream>
#include <string>
#include "incl/Dosen.hpp"
using namespace std;

namespace Sim {
    Dosen::Dosen(string nik, string nama, string nip, string lab) 
        : Orang(nik, nama), nip(nip), lab(lab) {}

    void Dosen::tampilkanInfo() const {
        cout << "--- Data Dosen ---" << endl;
        Orang::tampilkanInfo();
        cout << "NIP : " << nip << "\nLab : " << lab <<endl;
    }
}