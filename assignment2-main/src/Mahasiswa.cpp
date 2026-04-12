#include "include/Mahasiswa.hpp"
using namespace std;

namespace Sim {
    Mahasiswa::Mahasiswa(string id, string nama, string nrp, string departemen) 
        : Orang(id, nama), nrp(nrp), departemen(departemen) {}

    void Mahasiswa::tampilkanInfo() const {
        cout << "--- Data Mahasiswa ---" << endl;
        Orang::tampilkanInfo(); // Memanggil method dari class induk
        cout << "NRP  : " << nrp << "\nDept : " << departemen << endl;
    }
}