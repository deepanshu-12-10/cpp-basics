#include<iostream>
using namespace std;


int main(){

    
	int n;
	cin>>n; 
	int i=1;
	while(i<=n)
	{
		int space_count=n-i;
		while (space_count>0){
				cout<<" ";
				space_count--;
			}
		int j=2*i-1;
		while(j>0)
		{
			cout<<"*";
			j--;
		}
		cout<<endl;
		i++;
	}
	
	return 0;

  
}
