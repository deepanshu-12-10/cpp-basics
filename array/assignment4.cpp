 #include<iostream>
using namespace std;
int  pairSum(int arr[], int n, int x)
{
int count=0;
for(int i=0;i<=n-2;i++)
{
        for(int j=i+1;j<=n-1;j++) {
	
		if(x==arr[i]+ arr[j]){
		count++;
		}
        }
}
return count;
}
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int arr[100];
    for(int u=0;u<n;u++){
        cin>>arr[u];
    }
    int output=pairSum(arr,n,x);
    cout<<output;
} 
/* int  pairSum(int arr[], int n, int x)
{
int i=0;
int count;
while(i<n){
  if (arr[i] > x) {
    return -1;
  }
  i++;
  break;
}
while(i<n){
  if (arr[i] == x) {
	return 0;
  }
  i++;
break;
count++;
}
while(i<n)
{
        int j=0;
	while(j<n) {
		int total=arr[i]+arr[j];
		if(x==total){
		count++;
		}
		j++;
	}
	if(arr[i]==x){
		count++;
	}
	i++;
	return count;
}
} */