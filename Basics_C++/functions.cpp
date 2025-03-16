//7. Function
//Basic Function
#include <iostream>
using namespace std;

void greet() {
    cout << "Hello, World!" << endl;
}

int main() {
    greet();  // Function Call
    return 0;
}

// Function with Parameters
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int sum = add(10, 20);
    cout << "Sum: " << sum << endl;
    return 0;
}
