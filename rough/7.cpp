#include<iostream>
using namespace std;
void  subarray(int arr[],int n,int s){
     for(int i=1;i<=n;i++){
            int sum=0;
            for(int j=i;j<=n;j++){
                sum=sum+arr[j];
                if(sum==s){
                    cout<<i<<" "<<j;
                    break;
                }
                
            }
            if(sum==s){
                break;
            }
        }
}
int main(){
    int n;
    cout<<"size";
    cin>>n;
    int arr[100];
    cout<<"enter the array";
    for(int i=1;i<=n;i++){
        cin>>arr[i];
            }
            int s;
            cout<<"sum";
            cin>>s;
     subarray(arr,n,s);
}