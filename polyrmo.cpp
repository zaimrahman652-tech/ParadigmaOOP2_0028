#include <iostream>
using namespace std;

// Kelas induk (Base Class) yang bersifat abstrak
class seseorang {
public:
    // Pure virtual function membuat kelas ini menjadi abstract class
    virtual void pesan() = 0; 
    