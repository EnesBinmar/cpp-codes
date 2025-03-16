//Girilen üç sayıdan büyük olanı veren fonksiyon alıstırması

#include<iostream>
using namespace std;
int max (int,int);


int main(){
    cout <<"Program Calisiyor...\n";
    int ilk,iki;
    cout<<"lutfen ilk sayiyiyi girin:"; 
    cin>>ilk; 
    cout<<"lutfen ikinci sayiyi girin:"; 
    cin>>iki;
    cout<<"buyuk sayi:"<< max(ilk,iki);


    return 0;
}

int max(int a,int b){
    int c = 0;
    if (a<b)
    {
        c=b;
    }
    else {
        c=a;
    }
}