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
        Mahasiswa(string id, string nama, string nrp, std::string departemen);
        void tampilkanInfo() const override;
    };
}

#endif