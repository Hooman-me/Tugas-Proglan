#include <iostream>
#include <string>

#include "incl/Orang.hpp"
#include "incl/Dosen.hpp"
#include "incl/Mahasiswa.hpp"
#include "incl/Tendik.hpp"

using namespace std;
using namespace Sim;

int main(int argc, char ** argv)
{
    cout << "====================================\n";
    cout << "  Sistem Informasi Akademik (SIM)   \n";
    cout << "====================================\n\n";

    // 1. Instansiasi objek Mahasiswa
    Mahasiswa mhs1("3515XXX", "Hanif Ashari", "5024251047", "Teknik Komputer");
    mhs1.tampilkanInfo();
    cout << endl;

    // 2. Instansiasi objek Dosen
    Dosen dsn1("3274XXX", "Bapak Reza Fuad Rachmadani", "1985040320112121001", "Telematika dan Multimedia Cerdas");
    dsn1.tampilkanInfo();
    cout << endl;

    // 3. Instansiasi objek Tendik
    Tendik tdk1("5701XXXX", "Ibu Kadek Yaniza Ayu", "1999202242055", "Administrasi Akademik");
    tdk1.tampilkanInfo();
    cout << endl;

    return 0;
}