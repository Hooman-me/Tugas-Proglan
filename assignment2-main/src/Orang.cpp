#include "incl/Orang.hpp"
using namespace std;

namespace Sim {
    Orang::Orang(string nik, string nama) : nik(nik), nama(nama) {}

    void Orang::tampilkanInfo() const {
        cout << "NIK   : " << nik << "\nNama : " << nama << endl;
    }
}