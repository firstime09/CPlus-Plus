#include<iostream>
using namespace std;

int main(){
    int a, c;
    cout << "Input Nilai a = ";
    cin >> a;

    //c = 1;
    for(int b = a; b > 0; b--){
        printf("%-d", b);
        //c*=b;
        if (b!=1)
        printf("x");
    }
    //printf(" = %d",c);
}
