#include<iostream>
using namespace std;
int main(){
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[100];
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int c[100];
    
int i=0;
int p=0;
int j=0;
while(i<n){
    while(j<m){
        while(p<n+m){
        if(a[i]<b[j]){
            c[p]=a[i];
            cout<<c[p];
            p++;
            i++;
        }
        else {
            c[p]=b[j];
            cout<<c[p];
            p++;
            j++;
        }
    }

}
}
}