/* #include <iostream>
#include <vector>
using namespace std;

// Custom power function to handle integer types
long long customPow(int base, int exponent) {
    long long result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

// Function to convert a decimal number to binary and print it
void decimalToBinary(long long N) {
    if (N == 0) {
        cout << "0" << endl;
        return;
    }

    vector<int> binaryDigits;

    // Convert decimal to binary
    while (N > 0) {
        int remainder = N % 2;
        binaryDigits.push_back(remainder);
        N /= 2;
    }

    // Print binary number in reverse order
    for (int i = binaryDigits.size() - 1; i >= 0; --i) {
        cout << binaryDigits[i];
    }
    cout << endl;
}

int main() {
    long long N;
    cout << "Enter a decimal number: ";
    cin >> N;

    decimalToBinary(N);

    return 0;
}*/
#include<iostream>
#include<vector>
using namespace std;

long long custompow(int base,int exponent){
    long long result=1;
    for(int i=0;i<exponent;++i){
        result*=base;
    }
    return result;
}
void decimal(long long n){
    if(n==0){
        cout<<"0"<<endl;
        return;
    }
    vector<int>binary;
    while (n>0){
        int remainder=n%2;
        binary.push_back(remainder);
        n/=2;
    }
    for(int i=binary.size()-1;i>=0;--i){
        cout<<binary[i];
    }
    cout<<endl;
}
int main(){
    long long n;
    cin>>n;
    decimal(n);
    return 0;

}
