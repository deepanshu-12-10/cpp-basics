/*You have been given a random integer array/list(ARR) of size N. You have been required to push all the zeros that are present in the array/list to the end of it. Also, make sure to maintain the relative order of the non-zero elements.

Note:
Change in the input array/list itself. You don't need to return or print the elements.

You need to do this in one scan of array only. Don't use extra space. */
#include<iostream>
using namespace std;
/*void assignment(int arr[],int n){
for(int i=0;i<n;i++){
    if(arr[i]==0){
        for(int j=i+1;j<n;j++){
            if(arr[j]!=0){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                break;
            }
        }
    }
}
}*/
void assignment(int arr[],int n){  //jawab uperwala bhi thik h kein usme bs time limit excceeed ho rhi h ..

    int placenonzerohere=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[placenonzerohere];
            arr[placenonzerohere]=temp;
            placenonzerohere=placenonzerohere +1;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    assignment(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
