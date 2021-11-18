#include <iostream>
using namespace std;

int main () {
    // membuat variabel
    char nama[20], tempatlahir[30];
    float umur[2], bb[3];

    printf("Masukkan Nama: ");
    scanf("%s", &nama);

    printf("Masukkan Umur: ");
    scanf("%s", &umur);

    printf("Masukkan Tempat Lahir: ");
    scanf("%s", &tempatlahir);

    printf("Masukkan Berat Badan: ");
    scanf("%s", &bb);

    printf("\n------------------------------\n");
    printf("Nama anda %s\n", nama);
    printf("Umur anda %s\n", umur);
    printf("Tempat Lahir %s\n", tempatlahir);
    printf("Berat Badan %s\n", bb);
    
    return 0;
}