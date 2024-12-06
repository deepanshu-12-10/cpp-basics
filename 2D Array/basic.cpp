#include<iostream>
using namespace std;
void printarray(int b[][100],int m,int n){ //function created ...computer read in 1D array so its need to know the value of column ....formula used (skip number in 1D arry=C*i+j)
     //print ouput in row wise form by using function
    cout<<"row wise order "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int b[100][100]; //int b[R][C];
    int m;
    cout<<"enter the number of rows"<<endl;
    cin>>m;
    int n;
    cout<<"enter the number of columns"<<endl;
    cin>>n;
    //take input from user
    cout<<"enter the array"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
        cout<<endl;
    }
    //print ouput in row wise form 
    cout<<"row wise order "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    //print output in column wise form
    cout<<"column wise order"<<endl;
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    printarray(b,m,n);
}
