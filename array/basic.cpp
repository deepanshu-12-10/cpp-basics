#include<iostream>
using namespace std;
int main(){
    int ar[100];
     //take input from user
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    //print output
    for(int i=0;i<n;i++){ 
        cout<<ar[i]<<endl;
    }
    //largest number
    int max=INT8_MIN;
    for(int i=0;i<n;i++){
        if(ar[i]>max){
            max=ar[i];
        }
    }
    cout<<max;
    return 0;
}