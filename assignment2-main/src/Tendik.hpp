#ifndef TENDIK_HPP
#define TENDIK_HPP

#include "Orang.hpp"
using namespace std;


namespace Sim {
    class Tendik : public Orang {
    private:
        string nip;
        string unit_kerja;

    public:
        Tendik(string id, string nama, string nip, string unit_kerja);
        void tampilkanInfo() const override;
    };
}

#endif