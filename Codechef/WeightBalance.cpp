#include <iostream>
using namespace std;

int main() {
	int x;
	cin>>x;
	while(x--){
	    int w1,w2,x1,x2,m,maxi,mini, diff;
	    cin>>w1>>w2>>x1>>x2>>m;
	    maxi=x2*m;
	    mini=x1*m;
	    diff=w2-w1;
	    if (diff>=mini && diff<=maxi){
	        cout<<1<<endl;
	    }
	    else cout<<0<<endl;
	}
	return 0;
}
