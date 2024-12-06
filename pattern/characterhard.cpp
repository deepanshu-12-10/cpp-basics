/* 
    H
    GH
    FGH
    EFGH
    DEFGH
    CDEFGH
    BCDEFGH
    ABCDEFGH
*/
#include<iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    int i=0;
    while (i<=n-1){
        int j=i; 
        while (j>=0){
            char ch= 'A'+n-1-j;
            cout<<ch;
            j--;

        }
        cout<<endl;
        i++;

    } 
    return 0;
    
}




