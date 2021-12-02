#include<iostream>
using namespace std;
// Selection one condition

int main(){
    int nilai;
    cout << "Input Nilai Pembayaran: ";
    cin >> nilai;

    if(nilai > 100000){
        printf("Selamat! anda dapat hadiah");
        cout << "\n";
    }
    cout << "\nTerimakasih sudah berbelanja di toko kami" << endl;
    return 0;
}
