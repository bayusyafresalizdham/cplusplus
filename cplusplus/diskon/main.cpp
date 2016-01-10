#include <iostream>

using namespace std;

int main()
{
    int harga,total=0;
    cout << "Harga Semua Barang\t  : ";cin>>harga;
    if(harga > 100000 && harga <= 200000){
        total = 92.5 / 100 * harga;
    }else if(harga>200000 && harga <= 350000){
        total = 10 / 100 * harga;
    }else if(harga > 350000){
        total = 15 / 100 * harga;
    }else{
        total = harga;
    }
    cout << "Harga Yang Harus di Bayar : ";
    cout << total;
    return 0;
}
