#include <iostream>
using namespace std;

class bangunDatar {
    private:
        float panjang, lebar;
    public:
        float luas;

        void input() {
            cout << "Masukkan panjangnya = ";
            cin >> panjang;
            cout << "Masukkan lebarnya = ";
            cin >> lebar;
        }
        float hitungLuas() {
            return panjang * lebar;
        }
        void display() {
            cout << "Panjangnya = " << panjang << endl;
            cout << "Lebarnya = " << lebar << endl;
            cout << "Luasnya = " << hitungLuas() << endl;
        }
};