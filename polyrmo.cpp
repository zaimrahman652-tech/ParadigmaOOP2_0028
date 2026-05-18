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
