#include <iostream>
using namespace std;

class baseClass {
public:
    // Menggunakan kata kunci 'final' pada virtual function
    // Fungsi ini tidak boleh di-override (ditulis ulang) oleh class turunan
    virtual void perkenalan() final {
        cout << "Hallo saya Function dari base class" << endl;
    }
};

class derivedClass : public baseClass {
public:
    // Dosen Anda mengubah nama fungsinya menjadi 'perkenalan1' (ada angka 1)
    // Ini dilakukan agar kode tidak eror saat di-compile!
    void perkenalan1() {
        cout << "Hallo saya function dari derived Class" << endl;
    }
};

