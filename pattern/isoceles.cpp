/*Print the following pattern for the given number of rows.
   1
  232
 34543
4567654     
Pattern for N = 4 */
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    while (i<=n){
        int spaces=1; //pahla loop sirf spaces ke liye
        while(spaces<=n-i){
            cout<<" ";
            spaces++;
        }
        int j=1; // yeh wala loop sirf center tak ki values ko print krne ke liye.....center me 1 toh usko aur usse pahle ki digit print krne liye
        int p=i;
        while (j<=i){
            cout<<p;
            p++;
            j++;
         }
         int k=2*i-2; // yeh wala center ke baad wali digit ko print krne ke liye ......center me isme 1 h toh uske baad ki digit print krene ke liye haar row me 
         while (k>=i){
             cout<<k;
             k--;
         }
         cout<<endl;
         i++;
    }
return 0;
}
