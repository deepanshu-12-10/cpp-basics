#include <iostream>
#include<vector>
using namespace std;

void printprimes(int n){
    if(n<2)
    {
        return ;

    }
    vector<bool> isprime(n+1,true);
    isprime[0]=isprime[1]=false;
    for (int p=2;p*p<=n;++p){
      if(isprime[p]){
          for (int i=p*p;i<=n;i+=p){
              isprime[i]=false;
          }
      }
    }
    for(int p=2;p<=n;++p){
        if (isprime[p]){
            cout<<p<<endl;
        }
    }

}
int main (){
    int n;
    cin>>n;
    printprimes(n);
    return 0;
}
   /* #include <iostream>
#include <vector>
using namespace std;

// Function to print all prime numbers up to N
void printPrimes(int N) {
    if (N < 2) {
        return;
    }

    // Create a boolean array "isPrime[0..N]" and initialize all entries as true.
    // A value in isPrime[i] will be false if i is not a prime, true if i is a prime.
    vector<bool> isPrime(N + 1, true);

    // 0 and 1 are not prime numbers
    isPrime[0] = isPrime[1] = false;

    for (int p = 2; p * p <= N; ++p) {
        // If isPrime[p] is not changed, then it is a prime
        if (isPrime[p]) {
            // Update all multiples of p to false indicating they are not primes
            for (int i = p * p; i <= N; i += p) {
                isPrime[i] = false;
            }
        }
    }

    // Print all prime numbers
    for (int p = 2; p <= N; ++p) {
        if (isPrime[p]) {
            cout << p << endl;
        }
    }
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    printPrimes(N);

    return 0;
}

*/