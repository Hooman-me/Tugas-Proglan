#include <iostream>
#include <string>

#include "include/Orang.hpp"
#include "include/Dosen.hpp"
#include "include/Mahasiswa.hpp"
#include "include/Tendik.hpp"

using namespace std;
using namespace Sim;

int main(int argc, char ** argv)
{
    cout << "====================================\n";
    cout << "  Sistem Informasi Akademik (SIM)   \n";
    cout << "====================================\n\n";

    // 1. Instansiasi objek Mahasiswa
    Mahasiswa mhs1("M001", "Hanif Ashari", "50242510XX", "Teknik Komputer");
    mhs1.tampilkanInfo();
    cout << endl;

    // 2. Instansiasi objek Dosen
    Dosen dsn1("D001", "Bapak Dr. Budi", "198001012005011001", "Sistem Tertanam & Arsitektur Komputer");
    dsn1.tampilkanInfo();
    cout << endl;

    // 3. Instansiasi objek Tendik
    Tendik tdk1("T001", "Ibu Siti Aminah", "198502022010122002", "Administrasi Akademik");
    tdk1.tampilkanInfo();
    cout << endl;

    return 0;
}