#include<iostream>
using namespace std;
int main(){
int a=3; //addition
a=a+1;
cout<<a<<endl;
a+=1;
cout<<a<<endl;
a++;
cout<<a<<endl;
++a;
cout<<a<<endl;
int b=8;
b=b-1;
cout<<b<<endl;
b-=1;
cout<<b<<endl;
b--;
cout<<b<<endl;
--b;
cout<<b<<endl;
b=b*3;
cout<<b<<endl;
b*=3;
cout<<b<<endl;
b=b/3;
cout<<b<<endl;
b/=3;
cout<<b<<endl;
int e,f=1;
e=10;
if(++e){
    cout<<"f"<<f<<endl;
}
else{
    cout<<"++f"<<++f<<endl;
}
return 0;
}