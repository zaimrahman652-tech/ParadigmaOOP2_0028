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

