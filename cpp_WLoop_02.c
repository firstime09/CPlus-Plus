#include<iostream>
using namespace std;

int a, row, col, velue;
printf(" X");
int main{
    for(a = 1; a <= 10; a++)
        printf(" %4d", a);
    for(row = 1; row <= 10; row++){
        printf("\n%4d ", row);
        for(col = 1; col <= 10; col++){
            value = row*col;
            printf("%4d ", value);
        }
        printf("\n");
    }
}
