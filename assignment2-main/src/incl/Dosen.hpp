#ifndef DOSEN_HPP
#define DOSEN_HPP

#include "Orang.hpp"
using namespace std;

namespace Sim {
    class Dosen : public Orang {
    private:
        string nip;
        string lab;

    public:
        Dosen(string nik, string nama, string nip, string lab);
        void tampilkanInfo() const override;
    };
}

#endif