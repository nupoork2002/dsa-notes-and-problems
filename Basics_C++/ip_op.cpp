// 1. Input/Output in C++
// cin, cout, 
//getline() Reads the entire line including spaces

// Example: Taking user input and printing output

#inculde <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number"; // cout is used for output
    cin >> num; // cin used for taking the input
    cout << "entered number: " << num << endl;
    return 0;
}