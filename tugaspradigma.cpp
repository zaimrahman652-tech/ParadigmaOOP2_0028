#include <iostream>
using namespace std;

// Abstract base class
class RekeningBank {
public:
    virtual void potongAdmin(double &saldo) = 0; // pure virtual
};

// Rekening Syariah: bebas biaya admin
class RekeningSyariah : public RekeningBank {
public:
    void potongAdmin(double &saldo) override {
        // Tidak ada potongan
        cout << "Rekening Syariah: saldo tetap Rp " << saldo << endl;
    }
};

// Rekening Konvensional: potong Rp 15.000
class RekeningKonvensional : public RekeningBank {
public:
    void potongAdmin(double &saldo) override {
        saldo -= 15000;
        cout << "Rekening Konvensional: saldo setelah potongan Rp " << saldo << endl;
    }
};

// Rekening Premium: aturan dinamis
class RekeningPremium : public RekeningBank {
public:
    void potongAdmin(double &saldo) override {
        if (saldo > 10000000) {
            cout << "Rekening Premium: saldo bebas potongan Rp " << saldo << endl;
        } else {
            saldo -= 50000;
            cout << "Rekening Premium: saldo setelah potongan Rp " << saldo << endl;
        }
    }
};

int main() {
    double saldoSyariah = 2000000;
    double saldoKonvensional = 5000000;
    double saldoPremium1 = 12000000;
    double saldoPremium2 = 8000000;

    // Pointer base class
    RekeningBank* rekening;

    // Syariah
    rekening = new RekeningSyariah();
    rekening->potongAdmin(saldoSyariah);
    delete rekening;

    // Konvensional
    rekening = new RekeningKonvensional();
    rekening->potongAdmin(saldoKonvensional);
    delete rekening;

    // Premium saldo > 10 juta
    rekening = new RekeningPremium();
    rekening->potongAdmin(saldoPremium1);
    delete rekening;

    // Premium saldo <= 10 juta
    rekening = new RekeningPremium();
    rekening->potongAdmin(saldoPremium2);
    delete rekening;

    return 0;
}
