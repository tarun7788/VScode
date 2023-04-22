#include<iostream>
using namespace std;
void swap(int arr[], int i){
    int temp;
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
}
int Bubblesort(int arr[],int n){
    int x=arr[0];
    for (int i = 0; i < n; i++)
    {
            if (arr[i]>arr[i+1]){
                swap(arr, i);
            }
            else{
                x=arr[i];
            }
        
    }
    
}
int main()
{
int n;
cout<<"Enter The Number:"<<endl;
cin>>n;
cout<<"Insert the Elements in the Array:"<<endl;
int arr[n];
int a=arr[0];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < n; i++)
{
    Bubblesort(arr, n);
}
cout<<"Here is your sorted Array:"<<endl;
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

}