// There is a grid of size 105×105105×105, covered completely in railway tracks. Tom is riding in a train, currently in cell (a,b)(a,b), and Jerry is tied up in a different cell (c,d)(c,d), unable to move. The train has no breaks. It shall move exactly KK steps, and then its fuel will run out and it shall stop. In one step, the train must move to one of its neighboring cells, sharing a side. Tom can’t move without the train, as the grid is covered in tracks. Can Tom reach Jerry’s cell after exactly KK steps?

// Note: Tom can go back to the same cell multiple times.
// Input Format

//     The first line contains an integer TT, the number of test cases. Then the test cases follow.
//     Each test case contains a single line of input, five integers a,b,c,d,Ka,b,c,d,K.

// Output Format

// For each testcase, output in a single line "YES" if Tom can reach Jerry's cell in exactly KK moves and "NO" if not.
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
	while (T--){
	    int A, B, C, D, K;
	    cin >> A >> B >> C >> D >> K;
	    int Steps = abs(C-A) + abs(D-B);
	    
	    if (K>=Steps && (K-Steps)%2==0) cout << "YES\n";
	    else cout << "NO\n";
	}
	return 0;
}