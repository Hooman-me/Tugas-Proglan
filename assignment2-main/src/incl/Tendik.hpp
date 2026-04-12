#ifndef TENDIK_HPP
#define TENDIK_HPP

#include "Orang.hpp"
using namespace std;


namespace Sim {
    class Tendik : public Orang {
    private:
        string npp;
        string fungsi;

    public:
        Tendik(string nik, string nama, string npp, string fungsi);
        void tampilkanInfo() const override;
    };
}

#endif