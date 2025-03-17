// Pattern - 3: Right-Angled Number Pyramid

#include <bits/stdc++.h>
using namespace std;


void pattern3(int n) {
	// Write your code here.

	// outer loop  for the rows
	for(int i = 1; i < n; i++){
		// inner loop for the columns
		for(int j = 1; j <=i; j++){
			cout <<j  << " ";
		}
		
		cout << endl;
	}
}
int main(){
	int n = 5; // value of n
	pattern3(n);
	return 0;
}