#include <iostream>
using namespace std;
int main () {
float diag1, diag2, luas;

cout << "Program Untuk Menghitung Luas Belah Ketupat" <<endl;
cout << "Masukkan Diagonal 1 : "<< endl;
cin >> diag1;
cout << "Masukkan Diagonal 2 : " << endl;
cin >> diag2;
luas = 0.5 * diag1 * diag2;
cout << "Hasil :" <<luas <<endl;

return 0;
}
