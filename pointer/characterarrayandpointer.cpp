#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3};
    char b[]="abc";
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<&b[0]<<endl;
    char* p=&b[0];
 cout<<p<<endl;
 char c1='a';
 char* pc=&c1;
 cout<<c1<<endl;
 cout<<pc<<endl; //yeh kuch bhi print krega jab tak isse null character nhi mil jata
 cout<<&c1<<endl;
 cout<<&pc<<endl;
}