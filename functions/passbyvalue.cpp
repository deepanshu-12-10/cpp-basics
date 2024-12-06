/*#include<iostream>
using namespace std;
void increment(int a){
    a=a+1;
}
int main(){


int n=10; //isme "n" ki value 10 gyi toh "a" ke pass aur waha jaha kr "a" ki value increase bhi huyi lekin uska "n" se koi lena dena nhi h isliye output me koi change nhi h..
increment(n);
cout<<n;
}*/
/*#include<iostream>
using namespace std;
int increment(int a){
    a=a+1;
    return a;
}
int main(){
int n=10;
n=increment(n); //isme "n" ki value 10 gyi "a" ke pass aur waha se increment hoke "a" ki value huyi "11" aur usko stored krwa diya "n" me toh isliye ab "n" ki value ho gyi 11
cout<<n;
}*/
#include<iostream>
using namespace std;
void increment(int a){
    a=a+1;
    
}
int main(){
    int a=10; // isme saare variable same liye h lekin usse koi farak nhi pda .."a" ki value output me 10 hi aa rhi h kyuki increment function me jo bhi kaam hua uska kuch lena dena nhi h 
    increment(a);
    cout<<a;}
