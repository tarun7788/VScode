#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n,x,max=0; // n = no. of movies and x = space available
        cin >> n >> x;
        
        for(int i=1;i<=n;i++)
        {
            long s,r; // s = space required and r = rating
            cin >> s >> r;
            if(s<=x && r>max){
                max = r;
            }
        }
        
        cout << max << endl;
        
    }
    return 0;
}