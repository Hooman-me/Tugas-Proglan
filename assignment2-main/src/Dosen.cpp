#include "include/dosen.hpp"
using namespace std;

namespace Sim {
    Dosen::Dosen(string id, string nama, string nidn, string keahlian) 
        : Orang(id, nama), nidn(nidn), keahlian(keahlian) {}

    void Dosen::tampilkanInfo() const {
        cout << "--- Data Dosen ---" << endl;
        Orang::tampilkanInfo();
        cout << "NIDN : " << nidn << "\nKeahlian : " << keahlian <<endl;
    }
}