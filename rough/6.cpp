#include<iostream>
using namespace std;
void check(int a[]){
    cout<<sizeof(a)<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<a[i];
    // }
}
int main(){
    int n;
    cin>>n;
    int a[100];
    cout<<sizeof(a)<<endl;
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    check(a);
}