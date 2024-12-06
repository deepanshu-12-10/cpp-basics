/*
For a given two-dimensional integer array/list of size (N x M), you need to find out which row or column has
the largest sum(sum of all the elements in a row or column) amongst all the rows/columns.

Note :
If there are more than one rows/columns with maximum sum, consider the row/column that comes first. 
And if ith row and jth column has the same largest sum, consider the ith row as answer.
*/#include<iostream>
using namespace std;
int main(){
    int input[100][100];
    int n;
    cout<<"enter the row n"<<endl;
    cin>>n;
    int m;
    cout<<"enter the column m"<<endl;
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>input[i][j];
        }
    }
    int c=0;
    int lastsum=0;
    int e;
    if(n==0){
        cout<<"rows"<<" "<<0<<" "<<-214748368;
    }
    else{
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum=input[i][j]+sum;
        }
        c=sum;
        if(c>lastsum){
            lastsum=c;
            e=i;
        }
    }
    int d=0;
    int beferosum=0;
    int k;
 for(int j=0;j<m;j++){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=input[i][j]+sum;
    }
    d=sum;
 if(d>beferosum){
    beferosum=d;
    k=j;
 }
 }
 if(lastsum>=beferosum){
    cout<<"row"<<" "<<e<<" "<<lastsum;
 }
 else{
    cout<<"column"<<" "<<k<<" "<<beferosum;
 }
}
}