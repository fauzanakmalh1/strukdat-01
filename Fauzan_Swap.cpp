/*
Nama Program    : Program Swap
Nama            : Fauzan Akmal Hariz
NPM             : 140810180005
Tanggal buat    : 26 Februari 2019
Deskripsi       : Exercise 02 Praktikum
*/

#include <iostream>         //file header

using namespace std;        //untuk mempersingkat penulisan cin, cout, dll tanpa harus mengetik std lagi

void swap(int& x, int& y)      //fungso untuk swap
{
    int temp = x;               //mendeklarasikan temp sebagai int
    x = y;
    y = temp;
}

int main()              //program utama
{
    cout<<"Selamat Datang di Program Swap" <<endl <<endl;       //kalimat pembuka

    int x = 2;
    int y = 4;
    cout<<"x adalah : " <<x <<endl;
    cout<<"y adalah : " <<y <<endl <<endl;

    swap(x,y);                  //memanggil fungsi swap

    cout<<"Setelah di Swap" <<endl <<endl;
    cout<<"x adalah : " <<x <<endl;
    cout<<"y adalah : " <<y <<endl;

}
