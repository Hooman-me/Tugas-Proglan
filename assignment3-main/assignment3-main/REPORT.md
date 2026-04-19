# Laporan Programming Assignment 3

## Penjelasan
1. Perbaikan Bug Template : Menemukan dan memperbaiki kesalahan setter `SetY` dan `SetZ` yang sebelumnya _x menjadi _y untuk SetY dan _z untuk SetZ.
2. Custom Namespace : Membungkus seluruh class menggunakan namespace `MyGeo`.
3. Logika Jarak : Menambahkan metode `DistanceTo` pada class `Point2D` untuk mencari panjang garis sesungguhnya. Panjang garis ini menjadi panjang "sisi-sisi" segitiga.
4. Logika Segitiga :
a. ambil sisi dan disimpan ke dalam array lalu diurutkan.
b. perbandingan nilai eksak memakai fungsi agar lebih tepat dan eror tidak terlalu banyak.
c. menentukan segitiga, jika sisi pendek, tengah, dan panjang punya panjang yang sama maka itu "Sama Sisi", jika ada dua sisi yang sama panjangnya maka "Sama Kaki", jika sisi segitiga memenuhi teorema pythagoras maka itu "Siku Siku", jika segitiga tidak memenuhi syarat-syarat sebelumnya maka itu "Sembarang"