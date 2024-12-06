#include<iostream>
using namespace std;
int findUnique(int arr[], int n)
{
    for(int i=0;i<=n-1;i++){
    int j=0;
    while(j<n){
        if(i!=j&&arr[i]==arr[j]) {
            break;
        }
        j++;
    }
    if (j == n) {
        return arr[i];
    }
}} 
int main(){

    int n;
    cin>>n;
    int arr[100];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    int output=findUnique(arr,n); 
    cout<<output;
}
