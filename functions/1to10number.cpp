#include<iostream>
using namespace std;
void number(int n){ // void ka use tab krte h jab humhe koi particular value return nhi krwani hoti function se...isme koi value return nhi hogi
    int i=1;
    while(i<=n){
        cout<<i<<endl; //iss block of code se koi ek particular value print nhi ho rhi ..poora loop print ho rha h 
        i++;
    }
}
int main(){
    int n;
    cin>>n;
    number(n); //isme output hoga hi nhi ..kyuki iss baar function call hone pe ek sirf particular value print nhi kr rha ..void functions me aisa hi hota h

}