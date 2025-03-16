#include<iostream>
using namespace std;
class A {
    private:
    int intA;
    float floa;
    public:
    A (int i,float f):
    intA(i), floa(f)
    {cout<<"contructor A"<<endl;}
    void display()
    {cout<<endl<<"descructor A";}
};
class B : public A {
    private:
    int intB;
    float floaB;
    public:
    B(int il,float fl,int i2,float f2):
        A(il,fl),
        intB(i2), floaB(f2)
       {cout<<"constructor B"<<endl;} 
    void display (){
        A::display();
        cout<<intB<<","<<floaB<<",";
    }
    ~B(){cout<<endl<<"decructor B";}
};
class C : public B {
    private:
    int intC;
    float floaC;
    public:
    C(int il, float fl,int i2,float f2, int i3, float f3):
    B(il,fl,i2,f2),
    intC(i3), floaC(f3)
    {cout<<endl<<"decructor C";}

};
int main(){
    C c(1,1.1,2,2.2,3,3.3);
    cout<<endl<<"data in c =";
    c.display();
    return 0;
}