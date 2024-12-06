#include <iostream>
using namespace std;

int main() {
    // Input the integer n
    cout << "Enter an integer: ";
    int n;
    cin >> n;

    // Initialize sums for even and odd digits
    int evenSum = 0;
    int oddSum = 0;

    // Convert n to a positive number if it is negative
    n = abs(n);

    // Process each digit
    while (n > 0) {
        int digit = n % 10; // Get the last digit
        if (digit % 2 == 0) {
            evenSum += digit; // Sum even digits
        } else {
            oddSum += digit; // Sum odd digits
        }
        n /= 10; // Remove the last digit
    }

    // Print the results
    cout << "Sum of even digits: " << evenSum << endl;
    cout << "Sum of odd digits: " << oddSum << endl;

    return 0;
}
