#include<iostream>
#include<string.h>
using namespace std;

typedef struct{
    int tanggal, bulan, tahun;
} data_tanggal;

typedef struct{
    char nama[160];
    data_tanggal tgl_lahir;
} data_rekan;

data_rekan info_rekan;

main(){
    strcpy(info_rekan.nama,"Felliks Feiters");
    info_rekan.tgl_lahir.tanggal = 9;
    info_rekan.tgl_lahir.bulan = 8;
    info_rekan.tgl_lahir.tahun = 2000;
    cout<<"Nama: "<<info_rekan.nama;
    cout<<"\nTanggal lahir: ";
    cout<<info_rekan.tgl_lahir.tanggal;
    cout<<"-"<<info_rekan.tgl_lahir.bulan;
    cout<<"-"<<info_rekan.tgl_lahir.tahun;
}
