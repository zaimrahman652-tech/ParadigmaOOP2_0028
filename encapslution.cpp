#include <iostream>
using namespace std;

class remoteLampu {
private:
    // Variabel array untuk menyimpan nama saklar (disembunyikan dari luar kelas)
    string saklarNo[10];

public:
    // Setter: Metode untuk mengubah nilai saklarNo berdasarkan indeks
    void setSaklarNo(int i, string value) {
        saklarNo[i] = value;
    }

    // Getter: Metode untuk mengambil nilai saklarNo berdasarkan indeks
    string getSaklarNo(int i) {
        return saklarNo[i];
    }
};

