// Pattern-2: Right-Angled Triangle Pattern

#include <bits/stdc++.h>
using namespace std;


void nForest(int n) {
	// Write your code here.

	// outer loop  for the rows
	for(int i = 0; i < n; i++){
		// inner loop for the columns
		for(int j = 0; j <=i; j++){
			cout << "* ";
		}
		
		cout << endl;
	}
}
int main(){
	int n = 5; // value of n
	nForest(n);
	return 0;
}