/* You are given an integer array/list(ARR) of size N. It contains only 0s, 1s and 2s. Write a solution to sort this array/list in a 'single scan'.

'Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once.

Note:
1. You need to change in the given array/list itself. Hence, no need to return or print anything. 
2. You are not allowed to sort the list/array directly.
*/
#include<iostream>
using  namespace std;
void sort012(int *arr, int n)
{
for(int i=0;i<n;i++){
    if(arr[i]==2){
        int temp=arr[i];
        arr[i]=arr[n-1];
        arr[n-1]=temp;
              n--;
    }
    if (arr[i]!=0)
    {
        for(int j=i+1;j<n;j++){
            if (arr[j]==0){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 sort012(arr,n);
 for(int i=0;i<n;i++){
    cout<<arr[i];
 }
}