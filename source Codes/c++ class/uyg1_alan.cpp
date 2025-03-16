#include<iostream>
#include<string>
using namespace std;

class dortgen{
    private:
    int kenar1,kenar2;
    public:
    int deger(int x,int y);             //public olarak fonksiyon tanımladık
    void alan();                        
};

int dortgen::deger(int x,int y){
    kenar1=x;                     //private olan member'a member olan fonksiyondan eriştik
    kenar2=y;                     //Eğer nesne1.x=5 demiş olsaydık hata alırdık public olmadığı için.
    return 0;
}
void dortgen::alan(){
  cout<<"alan:"<<kenar1*kenar2<<endl;
}
int main(){
int a,b;
dortgen nesne1,nesne2;
cout<<"lutfen ilk nesnenin kenarini girin: "<<endl;
cin>>a;
cout<<"lutfen ilk nesnenin ikinci kenarini girin: "<<endl;
cin>>b;
nesne1.deger(a,b);
nesne1.alan();
cout<<"lutfen ikinci nesnenin kenarini girin: "<<endl;
cin>>a;
cout<<"lutfen ikinci nesnenin ikinci kenarini girin: "<<endl;
cin>>b;
nesne2.deger(a,b);
nesne2.alan();
return 0;
}
