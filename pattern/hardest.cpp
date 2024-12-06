/*
 Print the following pattern for the given number of rows.

Note: N is always odd.
     *
    ***
   *****
    ***
     *     

Pattern for N = 5

 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n%2==!0){ // n odd number hi lena h 
    int j=(n+1)/2; // horizontal center line (isme 7 no. wali line question me)
    int i=1; //pahle uper se leke center line tak ki coding krenge 
    while (i<=j){
        int space=0; 
        while (space<j-i){ //uper se centerr line tak ke spaces
            cout<<" ";
            space++;
        }
        int p = (2*i)-1; // uper se leke center line tak jitne bhi stars
        while (p>0){
            cout<<"*";
            p--;
        }
        cout<<endl;
        i++;
    }
    int x=j;  //yha se hum center line se leke niche tak ki coding kenge 
    while (x<n){
        int k=0; //spaces center line se leke niche tak ke
        while (k<x-(n/2))
        {
            cout<<" ";
            k++;
        }
        int o=(2*n)-(2*x)-1; //center se leke niche tak ke stars 
        while (o>0){
            cout<<"*";
            o--;
        }
        cout<<endl;
          x++;
        }
    }
    else { //agar user odd number naa de toh
        cout<<"please give odd number";
    }
    return 0;
}