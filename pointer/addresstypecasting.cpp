#include<iostream>     //typecasting wo hoti h jisme ek datatype ko dusare datatype me use krte h...
using namespace std;
int main(){
    int i=65;
    char c=i; //implicit typecasting...jisme ek variable integer me leke usko character me use kr liya
    cout<<c<<endl;
     int *p =&i;
     char *pc=(char*)p; // explicit typecasting...implicit typecasting krte pointer me toh error aata ..isliye yha pe (char*) explicit typecasting kr rkhi h
     cout<<*p<<endl;
     cout<<*pc<<endl;
     cout<<*(pc+1)<<endl;
     cout<<*(pc+2)<<endl;
     cout<<*(pc+3)<<endl;
     cout<<p<<endl; 
     cout<<pc<<endl;  //yeh address nhi dega ..ballki waha tak print krega jaha tak iisse null character nhi mil jta 

}