/*
you have been given a random integer array/list(ARR) of size N. Write a function that rotates the given array/list by D elements(towards the left).

 Note:
Change in the input array/list itself.You don't need to return or print the elements.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= t <= 10^4
0 <= N <= 10^6
0 <= D <= N
Time Limit: 1 sec
Sample Input 1:
1
7
1 2 3 4 5 6 7
2
Sample Output 1:
3 4 5 6 7 1 2








#include<iostream>
using namespace std;                           yeh bhi correct answer h bs niche wale solution ka long form h aur isme dikha rkha h ki ek simple array ko reverse kaise kiya jata h..
void reverse(int a[],int n,int d){              array reverse krne ke liye bs uper ka void reverse function se ho jayega baki yeh sab pura likha hua h wo dusare question type ka h...
     for(int i=0;i<n;i++){
        int j=n-1;
          int temp=a[i];
            a[i]=a[j];
            a[j]=temp; 
            n--;}}
 void reverse1(int a[],int n,int d){
    reverse(a,n,d);
 for(int i=0;i<n-d;i++){
        int j=n-d-1;
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        n--;
        }}
void reverse2(int a[],int n,int d){
    reverse1(a,n,d);
      for(int i=n-d;i<n;i++){
            int j=n-1;
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            n--;
        }
} 
int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int d;
    cin>>d;
   reverse2(a,n,d);
   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }
} */
#include<iostream>
using namespace std;

void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}    
void rotate(int *input, int d, int n)
{
    //Write your code here
    // int temp;
    // for(int j=1;j<=d;j++){
    //     temp = input[0];
    //     for(int i = 0;i<n-1;i++)
    //         input[i] = input[i+1];
    //     input[n-1] = temp;
    // }
    
    
    
//     int temp[1000000];
//     for(int j=0;j<=d-1;j++){
//         temp[j] = input[j];
//     }
//     for(int i = 0;i<n-1;i++)
//         input[i] = input[i+d];
//     for(int j=n-d;j<=n-1;j++){
//         input[j] = temp[j-n+d];  }
    
    
    
    rvereseArray(input,0,n-1);		// reversing the complete array
    rvereseArray(input,0,n-d-1);	// reversing first n-d elements
    rvereseArray(input,n-d,n-1);	// reversing last d elements
    
    
}
int main(){
    int n;
    cin>>n;
    int input[100];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int d;
    cin>>d;
   rotate(input,d,n);
   for(int i=0;i<n;i++){
    cout<<input[i]<<" ";
   }
} 