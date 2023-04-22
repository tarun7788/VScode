#include<iostream>
using namespace std;
int main()
{
int n;
int count=0;
cin>>n;
for (int i = 1; i <n+1; i++){
    cout<<endl;
    for (int j = 1; j<=i; j++){
        if (j>=i)
        {
            cout<<" ";
        }
        else{
            cout<<j;
        }
        
        
        } 
    }
}