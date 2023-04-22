#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int>vec1;
    int target, n, a;
    cout<<"Enter the Vector"<<endl;
    while(cin>>a){
        vec1.push_back(a);
        // if (vec1[a]==NULL){
        //     break;
        // }
    }
    cin>>target;
    n=vec1.size();
    for ( int i=0 ; i<n; i++){
        for(int j=0; j<n; j++){
            if (vec1[i]+ vec1[j]==target){
                cout<<"[%i,%j]",i,j;
        }
        }
    }
}