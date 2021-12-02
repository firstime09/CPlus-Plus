#include<iostream>
using namespace std;

int a, cetak;
int main(){
    printf("Input Angka: "); scanf("%d", &a);
    printf("Kebalikan: ");
    while(a > 0){
        int cetak = a % 10;
        a = a/10;
        printf("%d", cetak);
    }
}


/*
int main(){
    printf("Input Angka: "); scanf("%d", &a);
    printf("Output Angka: ");
    do{
        printf("%d", cetak);
        cetak = a % 10;
        a = a/10;
    }
    while(a > 0);
    //return 0;
}
*/
