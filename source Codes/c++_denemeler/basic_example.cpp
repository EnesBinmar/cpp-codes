//ogrenci bilgi sistemi 
#include<iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
int id=1;
using namespace std;
void menu();
void secim_switch();
string ogrenci_ekle();

int main(int argc, char const *argv[])
{
    cout<<"Program Calisiyor.."<<endl;
    menu();
    secim_switch();


    return 0;
}
void menu(){
    cout<<"----------MENU---------------"<<endl;
    cout<<"1-------Ogrenci Ekleme-------"<<endl;
    cout<<"2-------Ogrenci Guncelleme---"<<endl;
    cout<<"3-------Ogrenci Sorgulama----"<<endl;
    cout<<"4-------Ogrenci Silme--------"<<endl;
    cout<<"5-------Ogrenci Bilgi--------"<<endl;
}
void secim_switch(){
    char secim;
    cout<<"Seciminizi Giriniz:\n";
    cin>>secim;
    switch (secim)
    {
    case 1:
        ogrenci_ekle();
        break;
    case 2:
        //ogrenci_guncelle
        break;
    case 3:
        //ogrenci_sorgulama
        break;
    case 4:
        //ogrenci_silme
        break;
    case 5:
        //ogrenc_bilgi
        break;    
    default:
        cout<<"hatalı giriş yaptınız";
        if (secim>5)
        {
            secim_switch();
        }
        
        break;
    }
}
string ogrenci_ekle(){
    cout<<"Eklemek Istediginiz ogrenciye ait bilgileri giriniz."<<endl;
    string name,surname,address,phonenum;
    cout<<"isim:";
    cin>>name;
    cout<<"soyisim:";
    cin>>surname;
    cout<<"telefon numarasi giriniz:";
    cin>>phonenum;
    cout<<"adres giriniz:";
    cin>>address;

    ofstream veritabani("veri.txt");
    if (veritabani.is_open())
    {
        veritabani<<id <<","<< name<<","<<surname<<","<<phonenum<<","<<address;
    }
    veritabani.close();
    id++;   
}