#include <iostream>
using namespace std;
int main (){
//menghitung luas layang-layang

float diag1,diag2,luas;
cout << "Program Untuk Menghitung Luas Layang-Layang : " << endl;
cout << "Masukkan Diagonal 1 : " << endl;
cin >> diag1;
cout << "Masukkan Diagonal 2 : " << endl;
cin >> diag2;
luas = 0.5 * diag1 * diag2;
cout << "Hasil : " << luas << endl;


return 0;
}
