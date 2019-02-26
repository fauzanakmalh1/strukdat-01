/*
Nama Program    : FizzBuzz
Nama            : Fauzan Akmal Hariz
NPM             : 140810180005
Tanggal buat    : 26 Februari 2019
Deskripsi       : Exercise Praktikum
*/

#include <iostream>         //file header

using namespace std;        //untuk mempersingkat penulisan cin, cout, dll tanpa harus mengetik std lagi

void fizzbuzz(int& n)
{
    for(int i=1;i<=100;i++)     //looping dari 1 samapai 100
    {
        if(i%3==0 && i%5==0)        //pengkondisian jika bisa dibagi dengan 3 dan 5
        {
            cout<<"FizzBuzz"<<endl;
        }
        else if(i%5==0)             //pengkondisian jika bisa dibagi dengan 5
        {
            cout<<"Buzz"<<endl;
        }
        else if(i%3==0)             //pengkondisian jika bisa dibagi dengan 3
        {
            cout<<"Fizz"<<endl;
        }
        else                        //jika tidak masuk pengkondisian diatas
        {
            cout<<i<<endl;
        }
    }
}

int main()                  //program utama
{
    int n;                  //mendeklarasikan n sebagai int
    cout<<"Program FizzBuzz" <<endl <<endl;         //kalimat pembuka

    fizzbuzz(n);            //untuk memanggil fungsi
}
