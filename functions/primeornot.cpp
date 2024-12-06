#include<iostream>
using namespace std;
bool isprime(int n){
    int d=2;
    int i=1;
    while(d<n){
        if(n%d==0){
            return false;
        }
        d++;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    bool output=isprime(n);
    cout<<output;
    return 0;
}