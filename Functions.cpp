#include <iostream> 
#include <cmath>  
using namespace std;

// Function prototypes
float addition(int x, int y);
double simple_interest(int principle, float rate, int time);
int multiply(int a, int b); // New function prototype

int main() {
    float sum, interest, sum1;
    int product;

    // Function calls
    sum = addition(10, 20);
    sum1 = addition(110, 230);
    interest = simple_interest(5000, 0.2, 4);
    product = multiply(8, 9); // New function call

    // Output results
    cout << "Sum: " << sum << endl;
    cout << "Sum1: " << sum1 << endl;
    cout << "Simple Interest: " << interest << endl;
    cout << "Product: " << product << endl; // Output of multiply function

    return 0;
}

// Function definitions
float addition(int x, int y) {
    float sum;
    sum = x + y;
    return sum;
}

double simple_interest(int principle, float rate, int time) {
    double interest;
    interest = principle * rate * time;
    return interest;
}

int multiply(int a, int b) {
    return a * b;
}
