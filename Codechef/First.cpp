#include<iostream>
using namespace std;

int main(){
    int i;
    int n;
    int x;
    int y;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cin>>x;
        cin>>y;
        if (x==y)
        {
          int diff=x-y;
           cout<<diff;
        }
        
        if (x>y)
        {
        int diff = x-y;
        cout<<diff<<endl;
        }
        else if (y>x)
        {
            int diff = y-x;
            cout<<diff<<endl;
        }
        
        
        
    }
    
return 0;
}