/*Print the following pattern

Pattern for N = 4

1
23
345
4567 */
#include<iostream>
using namespace std;


int main()
{
int i=1;
int n;
int p;
cin>>n;
while(i<=n){
	p=i;
	int j=1;
	while (j<=i){
		cout<<p;
         j++;
		 p++;
	}
	cout<<endl;
	i++;
}
return 0;

}
	