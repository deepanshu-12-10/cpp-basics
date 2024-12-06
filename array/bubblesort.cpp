#include<iostream>
using namespace std;
/*void bubbleSort( int arr[], int n) 
{
    for(int m=0;m<n;m++){
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    break;
                }
            }
        }
    }
} */
void bubbleSort(int arr[], int n) //code uper wala bhi bilkul thik h...isme bs short krne ke liye "j" waale loop kko hatta diya ....
{
    for(int m=0;m<n-1;m++){     //aur jab single round ke liye "m" wala loop chlta h toh last position automatically sort ho chuki hoti h 
        for(int i=0;i<n-1-m;i++){ // toh usko dubara check krne ki jarurat nhi isliye hi "i" wale loop me "m" ko subract kiya gya h...
        
                if(arr[i]>arr[i+1]){
                    int temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;

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
    bubbleSort(arr,n);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
}}
