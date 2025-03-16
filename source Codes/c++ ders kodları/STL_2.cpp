#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> vector;
    vector.push_back(10);
     vector.push_back(11);
      vector.push_back(12);
       vector.push_back(13);
       vector[0] = 20;
       vector[3] = 23;

       for (int i = 0; i < vector.size(); i++)
       {
        cout<<vector[i]<<endl;
       }
       


    return 0;
}

