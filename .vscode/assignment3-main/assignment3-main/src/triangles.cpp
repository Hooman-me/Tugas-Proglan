/* 
Anda diminta untuk mengimplementasikan class dengan nama Triangle 
yang didalamnya memuat 3 data dalam class Point2D yang telah diimplementasikan

Tujuan dari program adalah menentukan apakah suatua Triangle adalah 
sama kaki, sama sisi, siku-siku, dan sembarang

Input:
    vector dari suatu Triangle (dengan banyak sebesar 3*N) --> N = total Triangle

Output
    print setiap line dengan "sama kaki", "sama sisi", "siku-siku", atau "sembarang"


Silahkan gunakan teori dan implementasi yang telah diajarkan dikelas
*/
#include "include/triangles.hpp"
#include <iostream>
#include <algorithm> // untuk std::sort
#include <cmath>     // untuk std::abs

namespace MyGeo {

    Triangle::Triangle() {}
    Triangle::Triangle(Point2D t1, Point2D t2, Point2D t3) : _t1(t1), _t2(t2), _t3(t3) {}

    void Triangle::SetT1(Point2D t1) { _t1 = t1; }
    void Triangle::SetT2(Point2D t2) { _t2 = t2; }
    void Triangle::SetT3(Point2D t3) { _t3 = t3; }

    void Triangle::TriangleType() {
        // 1. Cari panjang ketiga sisi
        float s1 = _t1.DistanceTo(_t2);
        float s2 = _t2.DistanceTo(_t3);
        float s3 = _t3.DistanceTo(_t1);

        // Array untuk diurutkan agar mudah cek pythagoras
        float sides[3] = {s1, s2, s3};
        std::sort(sides, sides + 3); // sides[2]  sisi terpanjang

        // Fungsi kecil untuk membandingkan float 
        auto isClose = [](float a, float b) {
            return std::abs(a - b) < 0.001f;
        };

        // 2. Logika Pengecekan
        if (isClose(sides[0], sides[1]) && isClose(sides[1], sides[2])) {
            std::cout << "sama sisi\n";
        } 
        else if (isClose(sides[0], sides[1]) || isClose(sides[1], sides[2])) {
            if (isClose((sides[0] * sides[0]) + (sides[1] * sides[1]), (sides[2] * sides[2]))) {
                std::cout << "siku-siku\n"; 
            } else {
                std::cout << "sama kaki\n";
            }
        } 
        else if (isClose((sides[0] * sides[0]) + (sides[1] * sides[1]), (sides[2] * sides[2]))) {
            std::cout << "siku-siku\n";
        } 
        else {
            std::cout << "sembarang\n";
        }
    }
}