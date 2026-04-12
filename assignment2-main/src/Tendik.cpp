#include <iostream>
#include <string>
#include "incl/Tendik.hpp"
using namespace std;

namespace Sim {
    Tendik::Tendik(string nik, string nama, string npp, string fungsi) 
        : Orang(nik, nama), npp(npp), fungsi(fungsi) {}

    void Tendik::tampilkanInfo() const {
        cout << "--- Data Tendik ---" << endl;
        Orang::tampilkanInfo();
        cout << "NPP  : " << npp << "\nFungsi : " << fungsi << endl;
    }
}