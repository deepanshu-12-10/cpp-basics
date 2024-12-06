#include<iostream>
using namespace std;
int main(){
    char str1[100];
    char str2[100];
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        cin>>str1[i];
    }
    for(int i=0;i<n;i++){
        cin>>str2[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(str1[i]==str2[j]){
                count++;
        
            }
        }
    }
    if(count==n){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}