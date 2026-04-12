#ifndef DOSEN_HPP
#define DOSEN_HPP

#include "Orang.hpp"
using namespace std;

namespace Sim {
    class Dosen : public Orang {
    private:
        string nidn;
        string keahlian;

    public:
        Dosen(string id, string nama, string nidn, string keahlian);
        void tampilkanInfo() const override;
    };
}

#endif