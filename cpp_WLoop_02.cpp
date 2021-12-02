#include<iostream>
using namespace std;

int a, row, col, value;
//printf(" X");
int main(){
    printf("   X");
    for(a = 5; a <= 8; a++)
        printf(" %4d", a);
        cout << "\n";

    for(row = 5; row <= 8; row++){
        printf("\n%4d ", row);

        for(col = 5; col <= 8; col++){
            value = row*col;
            printf("%4d ", value);
        }

        printf("\n");
    }
}
