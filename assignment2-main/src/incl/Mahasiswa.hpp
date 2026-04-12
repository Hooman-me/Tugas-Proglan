#ifndef MAHASISWA_HPP
#define MAHASISWA_HPP

#include "Orang.hpp"
using namespace std;

namespace Sim {
    class Mahasiswa : public Orang {
    private:
        string nrp;
        string departemen;

    public:
        Mahasiswa(string nik, string nama, string nrp, string departemen);
        void tampilkanInfo() const override;
    };
}

#endif