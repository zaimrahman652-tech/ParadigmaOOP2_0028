#include <iostream>
using namespace std;

// Kelas induk (Base Class) yang bersifat abstrak
class seseorang {
public:
    // Pure virtual function membuat kelas ini menjadi abstract class
    virtual void pesan() = 0; 
    
    // Bagian ini dikomentari di slide kuliah Anda:
    // virtual void pesan(){
    //     cout << "Pesan dari seseorang" << endl;
    // }
};

// Kelas turunan pertama (Derived Class)
class joko : public seseorang {
public:
    void pesan() {
        cout << "Pesan dari joko" << endl;
    }
};

// Kelas turunan kedua (Derived Class)
class lia : public seseorang {
public:
    void pesan() {
        cout << "Pesan dari lia" << endl;
    }
};

int main() {
    // Membuat pointer dari kelas induk
    seseorang* obyek;
    
    // Membuat objek dari kelas turunan
    joko a;
    lia b;
    
    // Polimorfisme: Pointer induk menunjuk ke objek joko (a)
    obyek = &a;
    obyek->pesan(); // Akan memanggil pesan() milik joko
    
    // Polimorfisme: Pointer induk menunjuk ke objek lia (b)
    obyek = &b;
    obyek->pesan(); // Akan memanggil pesan() milik lia
    
    // Bagian ini dikomentari di slide kuliah Anda:
    // //a.seseorang::pesan();
    // //b.seseorang::pesan();
    
    return 0;
}