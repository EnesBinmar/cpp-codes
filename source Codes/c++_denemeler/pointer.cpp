#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

string yerdegis(int *a, int *b){
    int gecici;
    gecici=*a;
    *a=*b;
    *b=gecici;
}
int main()
{
    cout<<"Program Calisiyor"<< endl;
    int ilk,ikinci;
    int ilk1,ikinci1;
    cout<<"ilk sayiyi giriniz:"; 
    cin>>ilk ; 
    cout<<"ikinci sayiyi giriniz:"; 
    cin>>ikinci;
    ilk1=ilk;
    ikinci1=ikinci;
    yerdegis(&ilk, &ikinci);
    cout<<"ilk sayi"<<ilk1 <<"son durum:"<<ilk <<"ikinci sayi"<<ikinci1 <<"son durum" <<ikinci <<endl;   
    return 0;
}