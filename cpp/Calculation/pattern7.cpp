#include<iostream>
using namespace std;
int main()
{
int n;
int count=0;
cin>>n;
for (int i = 0; i <n+1; i++){
    cout<<endl;
    for (int j = 0; j < i; j++){
        count++;
        cout<<count<<" ";
        }
    }
}