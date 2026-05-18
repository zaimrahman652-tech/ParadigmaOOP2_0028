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

int main() {
    // Membuat objek dari kelas remoteLampu
    remoteLampu lampuRumah;

    // Mengisi data saklar menggunakan metode Setter (setSaklarNo)
    lampuRumah.setSaklarNo(0, "Lampu Teras Rumah");
    lampuRumah.setSaklarNo(1, "Lampu Ruang Tamu");
    lampuRumah.setSaklarNo(2, "Lampu Kamar Tidur");
    lampuRumah.setSaklarNo(3, "Lampu Dapur");

    // Menampilkan data saklar menggunakan metode Getter (getSaklarNo)
    cout << lampuRumah.getSaklarNo(0) << endl;
    cout << lampuRumah.getSaklarNo(1) << endl;
    cout << lampuRumah.getSaklarNo(2) << endl;
    cout << lampuRumah.getSaklarNo(3) << endl;

    return 0;
}