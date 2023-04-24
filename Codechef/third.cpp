#include <iostream>
using namespace std;

int main() {
	int n, x, y, z;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
	    cin>>x>>y>>z;
	    if(x>y){
	        if(x>z){
	            std::cout << "Setter" << std::endl;
	        }
	     if(y>x){
	        if(y>z){
	            std::cout << "Tester" << std::endl;
	        }   
	     if(z>y){
	        if(z>x){
	            std::cout << "Editorialist" << std::endl;
	        }
	    }
	}
        }
	return 0;

        
    }