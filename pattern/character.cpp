/*  ABCD
    BCDE
    CDEF
    DEFG
*/
#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n;
    while (i<=n){
        int j=1;
        char starchar= 'A' +i-1;
        while (j<=n){
            char ch= starchar +j-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;

    }
    return 0;
}