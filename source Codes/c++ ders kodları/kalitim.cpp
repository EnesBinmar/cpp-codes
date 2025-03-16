#include<iostream>
using namespace std;
class A {
    private:  int x;
    public: int y ;
    protected: int z;
    public:
        A(){cout<<"A class'i oluşturuldu constructor A"<<endl;}
        ~A(){cout<<"A class'i yok edildi descontructor A"<<endl;}
        void f();
};
void A::f(){
    cout<<"A:"<<y<<endl;
}
class B:public A{                   //oluşturulan B A nın kalıtımını public olarak aldı
    public:
     int i;
     B(int, int,int);
     ~B(){cout<<"B yok edildi."<<endl;}
     void f();
};
class C:private A{              //A nın kalıtımını private olarak aldık
 public:
 int i;
 C(int,int);
 ~C(){cout<<"C yok edildi."<<endl;}
};
B:B(int a,int b,int c){
    cout<<"B olusuturuldu"<<endl;
    y=b;
    z=c;
}
void B::f(){
    cout<<"B:"<<y<<endl;
}
C::C(int a,int b,intc){
    cout<<"C oluşturuldu."<<endl;
    y=b;
    z=c;
}