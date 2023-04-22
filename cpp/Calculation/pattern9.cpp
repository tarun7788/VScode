#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int count;
for (int i = 0; i < n; i++)
{
    count=n;
    for (int j = n; j > i; --j)
    {
        cout<<" ";
    }
    for (int j = 0; j < i+1; j++)
    {
        cout<<count-i<<" ";
        count++;     
    }
    cout<<endl;
}

}