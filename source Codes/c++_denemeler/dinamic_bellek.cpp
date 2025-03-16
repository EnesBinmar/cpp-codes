#include<iostream>
#include<string>
#include<time.h>
#include<stdlib.h>

using namespace std;
int main(){
    int girdi;
    cout<<"bir sayi giriniz:";
    cin>>girdi;
    int *dinamic;
    dinamic= new int;
    *dinamic= girdi;
    girdi=0;
    cout<<"dinamik bellek kullanildi...\n";
    cout<<*dinamic <<"\n"<<girdi;
    delete dinamic; 
    return 0;
}