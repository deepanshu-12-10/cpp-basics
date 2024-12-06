#include<iostream>
using namespace std;
int main(){
    int i=10;
    int *p=&i;
    int *q=p;
    cout<<i<< " "<<&i<<endl;
    cout<<*p<<" "<<&p<<endl;
        cout<<q<<" "<<*q<<endl;
       
/*
int *p;
cout<<p<<" "<<*p<<endl; 
//to avoid this circumstance where pointer 'p' may give output or not ..we use
int *p=0; // null pointer..it will surely gives an error..
*/
   cout<<sizeof(p)<<endl; //it may be 4 or 8
    cout<<i<<" "<<&i<<endl;
    cout<<*p<<" "<<p<<" "<<&p<<endl;
    i++;
    cout<<i<<" "<<&i<<endl;
    cout<<*p<<" "<<p<<" "<<&p<<endl;
int **h=&p;  //double pointer ...kisi pointer ka address stored krne ke liye;
        cout<<h<<" "<<*h<<" "<<**h<<" "<<&h<<endl;
         cout<<i<< " "<<&i<<endl;
    cout<<*p<<" "<<&p<<endl;
    int a=*p;
    a++;
    cout<<a<<" "<<&a<<endl;
    cout<<*p<<" "<<&p<<endl;
    i=12;
    cout<<i<<" "<<&i<<endl;
    cout<<*p<<" "<<p<<" "<<&p<<endl;
    *p=23;
    cout<<i<<" "<<&i<<endl;
    cout<<*p<<" "<<p<<" "<<&p<<endl;
    (*p)++;
     cout<<i<<" "<<&i<<endl;
    cout<<*p<<" "<<p<<" "<<&p<<endl;
    p++; //adress of i 4 bytes aage pohch jayega aur new address mil jayega jispe kya value h humhe nhi patya 
     cout<<i<<" "<<&i<<endl;
    cout<<*p<<" "<<p<<" "<<&p<<endl;
    p=p+5; //adress of i 20 bytes aage pohch jayega aur new address mil jayega jispe kya value h humhe nhi patya 
     cout<<i<<" "<<&i<<endl;
    cout<<*p<<" "<<p<<" "<<&p<<endl;
    p--; //adreess of i 4 byte subtract kr dega aur new address mil jayega jispe kya value h humhe nhi patya 
     cout<<i<<" "<<&i<<endl;
    cout<<*p<<" "<<p<<" "<<&p<<endl;
    p=p-2; //address of i 8 bytes subtract kr dega aur new address mil jayega jispe kya value h humhe nhi patya 
     cout<<i<<" "<<&i<<endl;
    cout<<*p<<" "<<p<<" "<<&p<<endl; //isliye hi yha garbage value show ho rhi h 
 
    
}