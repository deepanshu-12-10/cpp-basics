/* 
. . . 1
. . 2 3
. 3 4 5
4 5 6 7
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int p;
    while (i<=n){
        int k=1;
        while (k<=n-i){
            cout<<" ";
            k++;
            int j=1;
            p=i;
            while (j<=i){
                cout<<p;
                p++;
                j++;
            }
            cout<<endl;
            i++;

        }
    }
    return 0;
}