
#include <bits/stdc++.h>
using namespace std;

// declaring a void function with a input parameter

void pattern1(int N){
    //outer loop for the  row
    for(int i = 0; i < N; i++){
        //inner loop for the columns
        for(int j = 0; j < N; j++){
            cout << "* "; // printing the * pattern
        }
        cout<< endl;
    }
}

int main(){
    int N = 5 ; // giving value of N , you can take the value from user as well.
    pattern1(N); // calling the void function
}