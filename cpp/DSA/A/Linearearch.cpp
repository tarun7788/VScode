#include<iostream>
using namespace std;
int Linear(int arr[],int n, int x){
    for (int i = 0; i <n; i++)
    {
        if (arr[i]==x)
        {
           cout<<"Present at index : "<<i;
           break;
        }
        if (arr[i]!=n){
            cout << "Not Present in the List--";
            break;
        }
        
    }
    
}
int main()
{
int n,x;
cout<<"Size of array : ";
cin>>n;
int arr[n];
cout<<"Enter the Elements in the Array :"<<endl;
for (int i = 0; i < n; i++)
{
   cin>>arr[i];
}
cout<<"Enter The element to find: ";
cin>>x;
Linear(arr,n, x);

}