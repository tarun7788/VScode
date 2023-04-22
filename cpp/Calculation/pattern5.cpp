#include<iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    char cap[5][5]={"A","B","C","D","E"};
    for(int i=0; i<n; i++){
        cout<<endl;
        for(int j=0; j<i+1; j++){
            cout<<cap[i]<<" ";
        }
    }
}