#include <iostream>
#include <string>
using namespace std;

int main()
{
  string nama, lahir; 
  int umur, berat;
  
  cout << "=====" << endl;
  cout << "INPUT" << endl; 
  cout << "=====" << endl;

  cout << "Masukkan Nama : ";
  getline(cin, nama);

  cout << "Masukkan Umur : ";
  cin >> umur;

  cout << "Masukkan Tempat Lahir : ";
  cin.ignore();
  getline(cin, lahir);
 
  cout << "Masukkan Berat Badan: ";
  cin >> berat;
 
  cout << endl;
 
  cout << "======" << endl;
  cout << "OUTPUT" << endl; 
  cout << "======" << endl;
  cout << "Nama anda " << nama  << endl;
  cout << "Umur anda " << umur << endl;
  cout << "Tempat Lahir " << lahir << endl;
  cout << "Berat Badan " << berat << endl;
 
 return 0;
}
