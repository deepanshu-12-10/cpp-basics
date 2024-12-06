#include<iostream>
using namespace std;

   int function(int n){ 
    int i=1;
    while(i<=n){
        int ans=i*i;
        if(ans>n){
        return i;
        }
        i++;
        
    }
    }
    int main(){
    int n;
    cin>>n;
    int a=function(n)-1;
    cout<<a;
return 0;
}