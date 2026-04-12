#include "include/Orang.hpp"
using namespace std;

namespace Sim {
    Orang::Orang(string id, string nama) : id(id), nama(nama) {}

    void Orang::tampilkanInfo() const {
        cout << "ID   : " << id << "\nNama : " << nama << endl;
    }
}