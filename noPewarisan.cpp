 #include <iostream>
using namespace std;

// Class yang menggunakan kata kunci 'final'
// Class ini tidak akan bisa diturunkan/diwariskan ke class lain
class baseClass final {
public:
    virtual void perkenalan() {
        cout << "Hallo saya Function dari base class" << endl;
    }
};

// Class biasa (tanpa final) yang bertindak sebagai Base Class alternatif
class baseClass1 {
public:
    virtual void perkenalan() {
        cout << "Hallo saya Function dari base class" << endl;
    }
};

// Derived Class yang sukses mewarisi baseClass1
class derivedClass : public baseClass1 {
public:
    void perkenalan() {
        cout << "Hallo saya Function dari derived Class" << endl;
    }
};
