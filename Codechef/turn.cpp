#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int x;
	cin>>x;
// 	U = speed of car
// 	V = must not exceed 
// 	A = brack limit
// 	S = Distance of the car from the turn 


	for (int i = 0; i < x; i++) {
	    int U,V,A,S,v;
	   cin>>U>>V>>A>>S;
       v=sqrt((V*V) + S*2*A);
       
	   if(U<=v){
	       cout<<"Yes"<<endl;
	   }
	   //else if (U<=v){
	   //    cout<<"Yes"<<endl;
	   //}
	   else cout<<"No"<<endl;
	}
	return 0;
}
