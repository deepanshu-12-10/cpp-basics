#include<iostream>
using namespace std;
 //hum pahle "pass by value" krte the jisme value jati thi aur new memory bn jati thi us value ke new variable 
 //ki..aur uska kuch lena dena nhi hota the niche main me diye variable se..
 //agar yeh pass by reference nhi hota toh "i" ki value 10 hi atti kyuki function me bne new variable "n" ki alag se new  memory hoti aur jiska koi lena dena nhi hota "i" se..
 //"n" me change krne se "i" me koi farak nhi aata..
void increment(int &n){  //yeh "pass by reference" ..isme hum value nhi bhejke..memory ki location or address bhej de rhe h new variable ko..isliye usme jo bhi change hoga wo main ke variable me bhi change hoga..
    n++;
}
int & f1(int n){ //bad practice..aissa kabhi mat kro..
    int a=n;
    return a;
}
int * f2(){  //bad practice..aisa kabhi mat kro..tum local variable ka address use krne ki soch rhe isliye wo warning de rha h..local variable ki address baar baar change ho jayegi..
    int i=10;
    return &i;
} 
int main()
{
//     int i=10;   there new memory of "j" is create so change in "i" doestn't bother the value of "j"
//     int j=i;
//     i++;
//     cout<<j<<endl;
int *p=f2();
cout<<*p<<endl;
int i=10;
int& k1=f1(i);
cout<<k1<<endl;
increment(i);
cout<<i<<endl;
int &j=i;
i++;
cout<<j<<endl;
j++;
cout<<i<<endl;
int k=100;
j=k;
cout<<j<<endl;
cout<<i<<endl;
 }