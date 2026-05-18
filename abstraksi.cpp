#include <iostream>
using namespace std;

class AbstraksiKlas {
private:
    // Atribut privat yang disembunyikan dari luar kelas
    string x, y;

public:
    // Method untuk mengisi nilai ke dalam private member
    void setXY(string a, string b) {
        x = a;
        y = b;
    }

    // Method untuk menampilkan nilai
    void display() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main() {
    // Membuat objek dari kelas AbstraksiKlas
    AbstraksiKlas ak;

    // Mengisi data secara tidak langsung melalui method setXY
    ak.setXY("Yogyakarta", "Kampus");

   