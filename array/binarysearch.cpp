 /* #include<iostream>
using namespace std;
int search( int nums[],int x) 
 {
    int start=0;
    int end=sizeof(nums)/sizeof(int);
    while(start<=end){
    int mid=(start+end)/2;
    if(nums[mid]==x){
        return mid;
    }
    if (nums[mid] < x) {
        start = mid + 1;
    } else {
        end = mid - 1;
    }
    }
return -1;
}
int main(){



    int nums[13]={3,4,11,15,16,21,30,31,32,33,37,43,44} ;
    
        int x;
    cin>>x;

        int output=search(nums,x);
        cout<<output;
        return 0;
    
} */
/*#include<iostream>
using namespace std;

int search(int a[],int n,int target) {
    int start=0;
    int end=n-1;
    while(start<=end)
    {
    int mid=(start+end)/2;
    if(a[mid]==target){
        return mid;
    }
    else{
        if (a[mid] < target) {
        start = mid + 1; 
    } 
    else {
       end = mid -1;
    }
    }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int target;
    cin>>target;
    int output=search(a,n,target);
    cout<<output;
} */
 #include<iostream>
using namespace std;
int main(){
int myNumbers[5] = {10, 20, 30, 40, 50};
int getArrayLength = sizeof(myNumbers) / sizeof(int);
cout << getArrayLength;
} 