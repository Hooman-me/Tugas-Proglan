# Laporan Tugas Asiignment 2
## Penjelasan kode
### Penjelasan kode hpp dan cpp
saya akan menjelaskan beberapa kode 
#### kode hpp orang
1. #ifndef,#define,#endif untuk keamanan
2. namespace Sim, wadah untuk class Orang
3. class Orang, dalam section private isinya nik dan nama, virtual ~Orang() = default untuk menghapus program yang telah dijalankan, virtual void tampilkanInfo() const agar bisa menimpa isinya
#### kode hpp turunan
1. #include "orang.hpp" agar nyambung dengan file utama, karena ini turunan maka dia dapet warisan dari Orang.hpp
2. di section private berisi nrp dan departemen(mahasiswa),berisi nip dan lab(dosen), berisi nip dan fungsi(tendik)
3. void tampilkanInfo() const override,ini untuk menimpa tampilkaninfo()
#### kode cpp orang
1. #include "include/Orang.hpp" untuk include atau nyambungin file hpp
2. namespace Sim, karena class yang dipakai di dalem Sim 
3. Orang::Orang, fungsi Orang itu punya class Orang
4. : nik(nik), nama(nama) {}, mengisi variabel dalam kelas
5. void Orang::tampilkanInfo() const { ... }, getter karena mengambil nilai dari bagian protected
#### kode cpp turunan 
1. #include untuk naymbungin ke file hpp
2. namespace Sim, karena class yang dipakai itu didalam Sim
3. Mahasiswa::Mahasiswa, fungi Mahasiswa milik class Mahasiswa(begitu juga yang lain)
4. : Orang(nik, nama), mengoper nik dan nama ke constructor orang
5. oid Mahasiswa::tampilkanInfo() const { ... }, getter
6. cout << "NRP",dll itu untuk printout sisanya yang belum termasuk tampilkanInfo()
#### kode cpp main
1. #include "include/...." untuk nyambung ke semua hpp
2. using namespace Sim, karena class didalam Sim, agar ga nulis Sim::.....
3. Mahasiswa mhs1("XXX", "Hanif Ashari", "50242510XX", "Teknik Komputer"); ini buat objek dg nama variabel mhs1 yang berisi sesuatu didalam kurung
4. mhs1.tampilkanInfo(); mmemanggil fungsi yang ada di dalam objek mhs1

