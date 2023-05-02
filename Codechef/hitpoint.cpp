#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        int x,y,z;
        cin>>x>>y>>z;
        int a=x+y,b=y+z,c=z+x;
        cout<<max(max(a,b),max(b,c));
        
    }
	return 0;
}