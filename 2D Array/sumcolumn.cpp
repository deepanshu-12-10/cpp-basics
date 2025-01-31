/*
Given a 2D integer array of size M*N, find and print the sum of ith column elements separated by space.
*/
#include<iostream>
using namespace std;
int main(){
int b[100][100];
int m;
cin>>m;
int n;
cin>>n;
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cin>>b[i][j];
	}
}
for(int j=0;j<n;j++){
   int sum=0;
	for(int i=0;i<m;i++){
		sum=b[i][j]+sum;
	}
    cout<<sum<<" ";
}
}
