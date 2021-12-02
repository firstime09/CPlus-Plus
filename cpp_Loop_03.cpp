// Nested for loop
#include<iostream>
using namespace std;

int main(){
    int minggu = 3, hari_dlm_seminggu = 7;

    for(int i = 1; i <= minggu; i++){
        cout << "Minggu: " << i << endl;

        for(int j = 1; j <= hari_dlm_seminggu; j++){
            cout << "     Hari:" << j << endl;
        }
    }
    return 0;
}
