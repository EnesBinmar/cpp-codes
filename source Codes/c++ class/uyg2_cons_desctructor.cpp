#include<iostream>
#include<conio.h>
using namespace std;
class dortgen{
    public:
    int kose2x,kose2y,kose3x,kose3y;
    int yukseklik=kose2y;
    int tabanUzunluk=kose3x-kose2x;
    dortgen(int x,int y ,int x2,int y2);
    ~dortgen();
    void goster();
    void alan(int a=0,int b=0){cout<<"Alan:"<<a*b<<endl;};    //Makro fonksiyon tanımlaması
};
dortgen::~dortgen(){
    cout<<"yok edici calisti"<<endl;
    //Burada yokedici sadece çalışır herhangi bir işlevi yok normalde belirmesek de desctructor vardır
    //Eğer dinamik bir class member üyesi tanımlıyorsak descrtructor olmalı ki 
    //alınan bellek geri iade edilebilsin
}

dortgen::dortgen(int x=0,int y=0,int x2=0,int y2=0){
    cout<<"Parametreli Constructor Calisti"<<endl;
    kose2x=x;
    kose2y=y;
    kose3x=x2;
    kose3y=y2;
    yukseklik=kose2y;
    tabanUzunluk=kose3x-kose2x;
}
void dortgen::goster(){
    cout<<"Nesneye ait veriler:"<<"yukseklik: "<<yukseklik<<"taban uznulugu: "<<tabanUzunluk<<endl;
}
int main(){
    cout<<"\n-------------PROGRAM CALISIYOR------------------\n\n"<<endl;
    cout<<"kordinat duzlemindeki dikdortgenin soldan alttan baslamak uzere her koseye sirasiyla:"<<endl;
    cout<<"1,2,3,4 numaralari verilecektir"<<endl;
    cout<<"Sizden ikinci ve ucuncu koselere ait x ve y değerlerini sırasıyla girmenizdir.\n"<<endl;
    int a,b,c,d;
    cout<<"lutfen 1. koseye ait x ve y degerini girin.\n x:  ";
    cin>>a;
    cout<<"y:  ";
    cin>>b;
    cout<<"lutfen 2. koseye ait x ve y degerini girin.\n x:  ";
    cin>>c;
    cout<<"y:  ";
    cin>>d;
    dortgen dortgenNesne2(a,b,c,d);
    dortgenNesne2.alan(dortgenNesne2.yukseklik,dortgenNesne2.tabanUzunluk);
    dortgenNesne2.goster();
    return 0;
}