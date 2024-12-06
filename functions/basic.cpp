#include<iostream>
using namespace std;
int factorial(int n){ //new function created
    int ans=1;
    int i=1;
    while(i<=n){
        ans=ans*i;
        i++;
    }
    return ans;
}
int main(){
/*int output=factorial(5); //calling of function
cout<<output; or */ 
cout<<factorial(5);
return 0;
}