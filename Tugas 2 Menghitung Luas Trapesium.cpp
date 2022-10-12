#include <iostream>
using namespace std;
int main () {

    float sisiA,sisiB,Tinggi,LuasTrapesium;

    cout << "Program Untuk Menghitung Luas Trapesium ; " << endl;
    cout << "Masukkan Sisi A : " << endl;
    cin >> sisiA;
    cout << "Masukkan Sisi B : " << endl;
    cin >> sisiB;
    cout << "Masukkan Tinggi Trapesium" << endl;
    cin >> Tinggi;
    LuasTrapesium = 0.5 *(sisiA+sisiB)*Tinggi;
    cout << "Hasil : " << LuasTrapesium <<endl;

return 0;
}
