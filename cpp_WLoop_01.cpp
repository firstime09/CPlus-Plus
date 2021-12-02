#include<iostream>
using namespace std;

//int hasil;
int main(){
    for(int a = 0; a < 4; a++){
        for(int b = 0; b < 4; b++){
        //hasil = a+b;
        if(a+b == 3)
            printf("1 ");
        else
            printf("0 ");
        }
        printf("\n");
    }
}
