// Programming Languages
// Problem Code - PROGLANG

// https://www.codechef.com/problems/PROGLANG

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int a, b, a1, b1, a2, b2;
	    cin >> a >> b >> a1 >> b1 >> a2 >> b2;
	    if((a == a1 and b == b1) or (a == b1 and b == a1))
	        cout << "1" << endl;
	    else if((a == a2 and b == b2) or (a == b2 and b == a2))
	        cout << "2" << endl;
	    else
	        cout << "0" << endl;
	}
	return 0;
}