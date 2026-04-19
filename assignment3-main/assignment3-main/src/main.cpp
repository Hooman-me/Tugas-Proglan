#include <iostream>
#include <string>
#include <vector>
#include <math.h>

#include "include/point2d.hpp"
#include "include/triangles.hpp"

using namespace std;
using namespace MyGeo;

int main(int argc, char ** argv)
{
    vector<Triangle> triangles;

    /*--------------------------
    Buat loop untuk membuat menginputkan data triangle (3 buah X Y Z data) ke dalam
    variable triangles
    --------------------------*/
    // Tambahkan di sini


    /*------------------------*/


    /*--------------------------
    Implementasikan kode untuk melakukan pengecekan apakah data pada variable triangles
    adalah "sama kaki", "sama sisi", "siku-siku", atau "sembarang"
    --------------------------*/
    // Tambahkan di sini

    /*------------------------*/
int N;

    
    if (cin >> N) {
        for (int i = 0; i < N; i++) {
            float x1, y1, x2, y2, x3, y3;
            cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
            
            Point2D p1(x1, y1, 0);
            Point2D p2(x2, y2, 0);
            Point2D p3(x3, y3, 0);
            
            triangles.push_back(Triangle(p1, p2, p3));
        }
    }


    for (size_t i = 0; i < triangles.size(); i++) {
        triangles[i].TriangleType();
    }
    return 0;
}