#include <iostream>
using namespace std;
void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) //yha se round start hote h ...(round 0--------round n-2)
    {
        int min = arr[i]; 
        int minindex = i;
        for(int j=i+1;j<n;j++){ //find the min value of rounds 
            if(min>arr[j]){
                min=arr[j];
                minindex=j;
            }
        }
        int temp=arr[i]; //swap the value in each round 
        arr[i]=arr[minindex];
        arr[minindex]=temp;
        
    }

}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
}
cout<<endl;
}