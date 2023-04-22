#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 string cap[10]={"A", "B", "C", "D","E"};
 for(int i=0; i<n+1; i++){
    cout<<endl;
    for(int j=0; j<i; j++){
        cout<<cap[j]<<" ";
    }
 }
 
}