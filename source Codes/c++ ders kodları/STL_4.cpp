#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[] = {100,110,120,130};
    vector<int> v(arr,arr+4);
    int i;
    cout<<"\n Beforce insertion";
    for ( i = 0; i < v.size(); i++)
    {
        cout<< v[i]<<endl;

    }
    v.insert( v.begin()+2,115);  //v.begin: v veri yapısının başlangıcı c.begin+2 başlangıcın iki sonrasına git
    cout<<"After Insertion"<<endl;
    for ( i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;

    }
    v.erase(v.begin()+2);     
    cout<<"After eraser"<<endl;
    for ( i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    
    
    
    return 0;
}
