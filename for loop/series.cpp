#include<iostream>
using namespace std;

int main() {
	int x;
	cin>>x;
	int y;
	int n=1;
    while(n<=x)
    {
		y=(3*n)+2;
		if (y%4==!0){
			cout<<y<<" ";	
		}
        n++;
	}
	return 0;
}
