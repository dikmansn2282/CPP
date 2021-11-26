#include <iostream>
using namespace std;
int main()
{
    int a, b, c, nilai, nim;
    char nama[50];

    cout << "=============================================" << endl; 
    cout << "Program untuk Menghitung dan menentukan Grade" << endl;
    cout << "=============================================" << endl;
    
    cout << "Masukkan NIM :";
    cin.ignore();
    cin >> nim;
    cout << "Masukkan Nama :";
    cin.ignore();
    cin.getline(nama, 50);
    cout << "Masukkan Nilai 1 :";
    cin >> a;
    cout << "Masukkan Nilai 2 :";
    cin >> b;
    cout << "Masukkan Nilai 3 :";
    cin >> c;

    // Perhitungan Rata2
    nilai = (a + b + c) / 3;
    // Tampilkan Rata2
    cout << "Rata2 Adalah : " << nilai << endl;
    // Percabangan dan Tampilkan Grade
    if (nilai >= 80) 
        cout << "Grade : A " << endl;
    else if (nilai >= 70) 
        cout << "Grade : B " << endl;
    else if (nilai >= 60)  
        cout << "Grade : C " << endl;
    else if (nilai >= 50)  
        cout << "Grade : D " << endl;
    else 
        cout << "Grade : E " << endl;

    return 0;
}
