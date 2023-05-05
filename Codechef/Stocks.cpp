#include <iostream>
using namespace std;

int main() {
	int x;
	cin>>x;
	for (int i = 0; i < x; i++) {
	    float s,a,b,c;
	    float newp;
	    cin>>s>>a>>b>>c;
	    if(c>=0){
	        newp=s+(s*c/100);
	        
	        if (newp>=a && newp<=b){
	        cout<<"Yes"<<endl;
	    }
	    else cout<<"No"<<endl;
	    }
	    else {
	        newp=s+(s*c)/100;
	        
	        if (newp>=a && newp<=b){
	        cout<<"Yes"<<endl;
	    }
	    else cout<<"No"<<endl;
	    }
	    
	}
	return 0;
}
