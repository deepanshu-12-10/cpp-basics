#include<iostream>
using namespace std;
int factorial(int n){ //new function created
    int ans=1;
    int i=1;
    while(i<=n){     //isme prove ho rha h ki humne sirf ek block of code likha (factoira function) jiski help se humne naye teen input value leke teen different alag values niklai
        ans=ans*i;
        i++;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int r;
    cin>>r;
    int fact_n=factorial(n); //function calling lekin input value "n" ke saath..jo bhi user ne di ho
    int fact_r=factorial(r); //function calling lekin input value "r" ke saath...jo bhi user ne di ho
    int fact_n_r=factorial(n-r); //function calling lekin input value "n-r" ke saath..
    int output=(fact_n)/(fact_r*fact_n_r);
    cout<<output;
    return 0;
}