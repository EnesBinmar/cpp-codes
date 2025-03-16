#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    float arr[] = {1.1,2.2, 3.3 , 4.4};
    vector<float> v1(arr, arr+4);
    vector<float> v2(4);
    v1.swap(v2);       //v1 ile v2 nin tuttğu değerlerinin yerini değiştir
    while (!v2.empty())
    {
        cout<< v2.back() <<endl;
        v2.pop_back();    //sonuna git
    }
    
    return 0;
}
