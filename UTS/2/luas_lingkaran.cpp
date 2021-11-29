#include <iostream>
using namespace std;

int main()
{
  float L, r;
  const float phi = 3.14;
  cout << "=================================" << endl;
  cout << "Program menghitung luas lingkaran" << endl;
  cout << "=================================" << endl;
  cout << "Masukkan jari-jari lingkaran = ";
  cin >> r;
  L = phi * r * r;
  cout << "Luas lingkaran adalah = "<< L << endl;
  return 0;
}