#include <iostream>
using namespace std;

int main() {
    int x;
	cin>>x;
	while(x--){
	    long int a,b,c=0,count=0;
	    cin>>a>>b;
	    count=a+b;
	    while(count){
	        int r=count%10;
	        if(r==0||r==6||r==9)
	        c=c+6;
	        else if(r==1)
	        c=c+2;
	        else if(r==2||r==3||r==5)
	        c=c+5;
	        else if(r==4)
	        c=c+4;
	        else if(r==7)
	        c=c+3;
	        else 
	        c=c+7;
	        count=count/10;
	    }
	    cout<<c<<endl;
	    
	}
	return 0;
}
