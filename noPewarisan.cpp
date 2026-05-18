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
