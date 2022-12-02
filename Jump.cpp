#include <iostream>
using namespace std;

int main() {
    int x,y;
    int arr[50];
    std::cin >> x;
	for (int i = 0; i < x; i++) {
	    std::cin >> y;
	    for (int j = 0; j <y ; i++) {
	        std::cin >> arr[j];
	    }
	    std::cout << arr[i] << std::endl;
	}
	
	return 0;
}
