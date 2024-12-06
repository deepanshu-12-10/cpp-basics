#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter the first number"<<endl;
cin>>a;
cout<<"enter the second number"<<endl;
cin>>b;
cout<<"enter the third number"<<endl;
cin>>c;
if(a>b)
{
    if(a>c)
    {
        cout<<a;
    }
    else {
        cout<<c;
    }}
    else 
{
    if (b>c){
        cout<<b;
    }
    else {
        cout<<c;
    }

}

return 0;
}