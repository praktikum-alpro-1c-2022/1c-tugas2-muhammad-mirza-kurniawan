#include <iostream>
using namespace std;
int main () {
    //menghitung luas segitiga
    float Alas, Tinggi, LuasSegitiga;

    cout << "Program Untuk Menghitung Luas Segitiga" << endl;
    cout << "Masukkan Alas : " <<endl;
    cin >> Alas;
    cout << "Masukkan Tinggi : " <<endl;
    cin >> Tinggi;
    LuasSegitiga = 0.5 * Alas * Tinggi;
    cout << "Hasil : " << LuasSegitiga << endl;

return 0;
}
