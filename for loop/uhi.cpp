#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int c;
	cin>>c;
	if (c==1)
    {
	int sum=0;
for(int i=0;i<=n;i++){
	sum=sum+i;
	
}
cout<<sum;
}
     else if (c == 2) 
     {
        int product = 1;
        for (int i = 1; i <= n; i++){
			product=product*i;
			
		}
		cout<<product;
        }
		else {
			cout<<"-1";
		}
		return 0;

}