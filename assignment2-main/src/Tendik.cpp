#include "include/tendik.hpp"
using namespace std;

namespace Sim {
    Tendik::Tendik(string id, string nama, string nip, string unit_kerja) 
        : Orang(id, nama), nip(nip), unit_kerja(unit_kerja) {}

    void Tendik::tampilkanInfo() const {
        cout << "--- Data Tendik ---" << endl;
        Orang::tampilkanInfo();
        cout << "NIP  : " << nip << "\nUnit Kerja : " << unit_kerja << endl;
    }
}