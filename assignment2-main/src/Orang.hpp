#ifndef ORANG_HPP
#define ORANG_HPP

#include <string>
#include <iostream>
using namespace std;


namespace Sim {
    class Orang {
    protected:
        string id;
        string nama;

    public:
        // Constructor
        Orang(string id, string nama);
        
        // Virtual destructor untuk best practice inheritance
        virtual ~Orang() = default; 
        
        // Virtual method agar bisa di-override oleh class turunan (Polymorphism)
        virtual void tampilkanInfo() const;
    };
}

#endif