/*// You and your friend are playing a game with hoops. There are NN hoops (where NN is odd) in a row. You jump into hoop 11, and your friend jumps into hoop NN. Then you jump into hoop 22, and after that, your friend jumps into hoop N−1N−1, and so on.

// The process ends when someone cannot make the next jump because the hoop is occupied by the other person. Find the last hoop that will be jumped into.
// Input:

//     The first line contains an integer TT, the number of test cases. Then the test cases follow.
//     Each test case contains a single line of input, a single integer NN.

// Output:

// For each testcase, output in a single line the answer to the problem.*/
#include <iostream>
using namespace std;

int main() {
    int n;
	cin>>n;
	int arr[n];
	
	for (int i = 0; i < n; i++) {
	    cin>>arr[i];
	}
	for (int i = 0; i < n; i++) {
	    cout<<(arr[i]+2)/2<<endl;
	}
	return 0;
}