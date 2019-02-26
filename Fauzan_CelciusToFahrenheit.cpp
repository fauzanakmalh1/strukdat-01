/*
Nama Program    : Program Celcius to Fahrenheit
Nama            : Fauzan Akmal Hariz
NPM             : 140810180005
Tanggal buat    : 26 Februari 2019
Deskripsi       : Exercise 02 Praktikum
*/

#include <iostream>         //file header

using namespace std;        //untuk mempersingkat penulisan cin, cout, dll tanpa harus mengetik std lagi

int celciusFahrenheit(float n, float hasil)         //fungsi untuk mengubah suhu
{
    cout<<"Masukan Suhu dalam Celcius   : "; cin>>n;        //memasukan celcius
    hasil = (n*9/5)+32;                                     //rumus
    cout<<"Hasil Fahrenheit             : " <<hasil <<endl; //hasil
}

int main()                  //program utama
{
    float n, hasil;         //mendeklarasikan n dan hasil bertipe float

    cout<<"Program Celcius to Fahrenheit" <<endl <<endl;        //kalimat pembuka

    celciusFahrenheit(n, hasil);        //memanggil fungsi

}

