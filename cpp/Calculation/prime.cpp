#include<iostream>
#include<conio.h>

using namespace std;
int main(){
    int n, i=2 ;
    cout<<"enter the number: ";
    cin>>n;
    int count=0;

        for(int i=2; i<(n-1); i++){
            if (n%i==0){
                count++;
                break;
            }
        }
        if(count>0){
            cout<<"Not prime";
        }
        else if(count==0){
            cout<<"Prime";
        }
    
return 0;
}