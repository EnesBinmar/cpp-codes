//Basit kalıtım ile örnekler

#include<iostream>
#include<string>
using namespace std;

class Teacher {
    protected:
    string name;
    int age,numOfStudent;
    public:
    void setTeacher(const string&,int,int);
    void print()const;
};
void::Teacher::setTeacher (const string &new_name, int a, int nos)
{
    name=new_name;
    age=a;
    numOfStudent=nos;
}
void Teacher::print()const{
    cout<<"Name:"<<name<<"Age:"<<age<<endl;
    cout<<"Number Of Student:"<<numOfStudent<<endl;
}
class Principal : public Teacher{
    string school_name;
    int numOfTeacher;
    public:
    void setPrinicpal(const string &, int,int,const string &);
    void print()const;
};
void Principal::setPrincipal(const string &new_name,int a,int nos,int note,const string &sch)
{
    setTeacher(new_name,a,nos);
    numOfTeacher=note;
    school_name=sch;
}
void Principal::print() const{
    Teacher::print();
    cout<<"Name of the school: "<<school_name<<endl;
}
//main function
int main (){
    Teacher t1;
    Principal p1;
    p1.setPrincipal("Principal 1",50,100,20,"school 1");
    t1.setTeacher("Teaacher 1",35,40);
    p1.print();
    t1.print();
    return 0;
}  