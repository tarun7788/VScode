#include <iostream>
using namespace std;

int mostFrequent(int* arr, int n)
{
    // code here
    int maxcount = 0;
    int element_having_max_freq;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
  
        if (count > maxcount) {
            maxcount = count;
            element_having_max_freq = arr[i];
        }
    }
  
    return element_having_max_freq;
}

int main() {
	int n;
	cin>>n;
	while(n--){
	    long int x,y,c,count=0;
	    cin>>x;
	    int arr[x];
	    for (int i = 0; i < x; i++) {
	        cin>>arr[i];
	    }
	    c=mostFrequent(arr,x);
	    for (int i = 0; i < x; i++) {
	        if(c!=arr[i]){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
