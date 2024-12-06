#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  if(n==0||n==1){
    cout<<-1;
  }
  else{
int num1=0,num2=1,num3;
while (num1<=n){
  num3=num2+num1;
  num1=num2;
  num2=num3;
  cout<<num1;

if(num1==n){
  cout<<1;
}
else{
  cout<<0;
}
  }}



}