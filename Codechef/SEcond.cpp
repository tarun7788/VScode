#include <iostream>
using namespace std;

int main() {
	int n, i, x, y;
	for (int i = 0; i < n; i++) {
	    cin>>x>>y;
	    if(x>y || x==y){
	        cout << "YES" <<endl;
	    }
	    else{
	        cout << "NO" <<endl;
	    }
	}
	return 0;
}
