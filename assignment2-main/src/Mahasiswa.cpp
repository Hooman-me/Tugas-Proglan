#include <iostream>
#include <string>
#include "incl/Mahasiswa.hpp"
using namespace std;

namespace Sim {
    Mahasiswa::Mahasiswa(string nik, string nama, string nrp, string departemen) 
        : Orang(nik, nama), nrp(nrp), departemen(departemen) {}

    void Mahasiswa::tampilkanInfo() const {
        cout << "--- Data Mahasiswa ---" << endl;
        Orang::tampilkanInfo(); // Memanggil method dari class induk
        cout << "NRP  : " << nrp << "\nDept : " << departemen << endl;
    }
}