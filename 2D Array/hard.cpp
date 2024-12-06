#include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int m;
    cin>>m;
    int n;
    cin>>m;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(j==n-1){
                for(int i=0;i<m;i++){
                    if(i==m-1){
                        for(int j=n-1;j>0;j--){
                           if(j==0){
                            for(int i=m-1;i>0;i--){
                                cout<<a[i][j];
                                m--;
                                n--;
                            }
                           }
                            cout<<a[i][j];
                        }
                    }
                    cout<<a[i][j];
                }
            }
            cout<<a[i][j];
        }
    }
}