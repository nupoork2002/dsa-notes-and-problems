// Pattern-4: Right-Angled Triangle Pattern II

#include <bits/stdc++.h>
using namespace std;


void pattern4(int n) {

	// outer loop  for the rows
	for(int i = 1; i < n + 1; i++){
		// inner loop for the columns
		for(int j = 1; j <=i; j++){
			cout <<j << " ";
		}
		
		cout << endl;
	}
}
int main(){
	int n = 5; // value of n
	pattern4(n);
	return 0;
}