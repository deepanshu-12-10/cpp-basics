#include<iostream>
using namespace std;
int multiply(int a,int b){
    return a*b;
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans=multiply(a,b);
    cout<<ans;
    return 0;
}