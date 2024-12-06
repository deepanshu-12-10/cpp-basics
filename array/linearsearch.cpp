/*#include<iostream>
using namespace std;
int main()
{
    //Write your code her
     int arr[10000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
for(int i=0;i<n;i++)
    {
        if(x==arr[i]){
            cout<<i;
            break;
        }
        }
        

        
        }
        
 */
#include<iostream>
using namespace std;
void linearSearch(int arr[], int n, int x)
{
    //Write your code her
    for(int i=0;i<n;i++)
    {
      if (x == arr[i]) {
        cout<< i;
      }
        }
        cout<< -1;
}
int main()
{
    int arrlist;
    cin>>arrlist;
    while (arrlist>0)
    {
    int n;
    cin>>n;
   
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    int x;
    cin>>x;
   linearSearch(arr,n,x);
    }
arrlist--;
    return 0;
    }