#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int a[20]={0,1};
cout<<a[0]<<endl<<a[1]<<endl;
for (int i = 2; i <n; i++)
{
    a[i]=a[i-1]+a[i-2];
    cout<<a[i]<<endl;
}

}