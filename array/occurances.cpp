#include<iostream>
using namespace std;
int occurances(int arr[],int n){
    
    int b[100];
    // for(int i=0;i<n;i++){
    //     int count=1;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]==arr[j]){
    //             count++;
    //             arr[j]=d;
    //             d--;
    //         }
            
    //     }
    //     arr[i]=count+2000;
    //     b[i]=arr[i];
    // }
    // for(int i=0;i<n;i++){
    //      for(int j=i+1;j<n;j++){
    //        if(b[i]==b[j]){
    //         cout<<
    //             return false;
    //         }
    //      }
    // }

    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        b[i]=arr[i];
        cout<<b[i]<<endl;
    }

    int d=0;
    int newcount;
    int count=1;
    for(int c=0;c<n-1;c++){
        cout<<b[c];
        if(b[c]==b[c+1]){
            count++;
            newcount=count;
        }
        if(b[c]!=b[c+1]){
            count=1;
                if(d==newcount){
            cout<<" "<<d<<" "<<newcount<<endl;
            return 0;
           }
            d=newcount;
        }
       
    }

    // int d=1;
    // int newcount;
    // for(int c=0;c<n;c++){
    //     for(int k=1;k<n;k++){
    //         if(arr[c]!=arr[k]){
    // for(int i=0;i<n;i++){
        
    //     int count=1;
    //     for(int j=i+1;j<n;j++){
    //           if(arr[i]==arr[j]){
    //         count++;
    //        } 
    //        newcount=count;
    //        cout<<newcount<<endl;
    //        } 
    //        if(d==newcount){
    //             return 0;
    //             }
    //       d=newcount;
    //       cout<<endl;
    //       cout<<d<<" "<<endl;;
    // }
    // }}}
    return 1;
}
    int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 int output=  occurances(arr,n);
 if(output==0){
    cout<<"false";
    }
    else{
        cout<<"true";
    }
 }
  