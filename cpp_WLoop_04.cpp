#include <iostream>
using namespace std;

int c, f;
int main(){
    printf("No\tCelcius\t\tFahrenheit\n");
    for(int a = 1; a <= 5; a++){
        printf("%2d", a);
        c = (a*10) - 10;
        printf("\t %3d", c);
        f = ((c*9/5) + 32);
        printf("\t\t %5d\n", f);
    }
}
