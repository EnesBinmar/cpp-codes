#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums1;
    nums1.insert(nums1.begin(), -999);
    nums1.insert(nums1.begin(), 14);
    nums1.insert(nums1.end(), 35);
    int i;
    for ( i = 0; i < nums1.size(); i++)
    {
        cout<<nums1[i]<<" "<<endl;
        

    }
    nums1.erase(nums1.begin());
    for ( i = 0; i < nums1.size() ; i++)
    {
        cout<<nums1[i]<<""<<endl;

    }
    vector<int> num2 = nums1;
    num2.insert(num2.begin(), 32);

    vector<int> num3;
    num3=num2;
    
    for ( i = 0; i < num3.size(); i++)
    {
        cout<< num3[i]<<""<<endl;

    }
    return 0;

}