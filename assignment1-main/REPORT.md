# Laporan Programming Assignment 1: Basic C++
## Penjelasan kode
### Penjelasan kode header dan main
Saya akan coba untuk menjelaskan beberapa cara kerja kode
#### Kode header
1. Library _<iostream>_ wajib di c++
2. library _<string>_ untuk bisa pakai string(tulisan)
3. Library _<ctime>_ agar bisa pakai data waktu dalam sistem komputer
4. Library _<sstream>_ agar bisa memecah atau membagi teks, disini dipakai untuk memisahkan tanggal, bulan, dan tahun 
#### Kode main
Terdapat penggunanaan pointer _tm*_  untuk memudahkan pemakaian, seperti ketika pakai fungsi _localtime()_ untuk membagi data waktu jadi data waktu hari, bulan, dan tahun.
Di c++ penulisan data waktu untuk tahun itu diambil setelah 1900, jika ingin mengubah data komputer ke data tahun normal maka data ditambah 1900 agar menjadi normal, dan sebaliknya ketika menginput data normal menjadi bentuk komputer maka data dikurangi 1900. Juga dalam data waktu untuk bulan, komputer menghitung bulan dari 0 yang membuat januari menjadi bulan ke 0, maka jika ingin menginput data normal menjadi data komputer maka harus dikurangi 1.
Data input diolah dengan _stringstream ss()_, data dibagi menjadi _dayinput_,  _monthinput_, _yearinput_, dan _ch_ untuk menyimpan "/".
#### Kode function
1. Function _yearsOld_ berisi inputTgl dan currentTgl, disini dicari selisih antar mereka di data *tm_year*, nah jika bulan belum mencapai bulan lahir atau ketika bulan sama tapi tanggal belum mencapai tanggal lahir, maka selisih dikurangi 1.
2. Function _monthsOld_ berisi inputTgl dan currentTgl, dicari selisih antar mereka di data *tm_year* lalu dikali 12 agar datanya menjadi bentuk bulan, lalu data ditambahkan dengan selisih antar data *tm_month*, lalu jika tanggal belum mencapai tanggal lahir, maka selisih dikurangi 1.
3. Function _dayOfDate_ berisi inputTgl saja, karena function ini dipakai untuk mencari hari lahir dengan cara memakai function _mktime_ yang isinya angka 0-6 lalu diubah oleh array _daftarHari_ menjadi nama hari yang sesuai.