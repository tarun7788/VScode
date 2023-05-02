#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	for (int i = 0; i < n; i++) {
	    int x,y,a,b,c,d;
	    cin>>x>>y>>a>>b>>c>>d;
	    if ((x==a ||x==b)&& (y==a)||(y==b)){
	        cout<<"1"<<endl;
	    }
	    else if((x==c ||x==d)&& (y==c)||(y==d)){
	        cout<<"2"<<endl;
	    }
	    else {
	        cout<<"0";
	    }
	}
	return 0;
}
