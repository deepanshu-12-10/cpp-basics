#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int evenno;
	int oddno;
	int evensum=0;
	int oddsum=0;
	int firstdigit;
        if (firstdigit % 2 == 0) {
          cout << evenno;
          evensum = evenno + evensum;
        }
		else {
			cout<<oddno;
			oddsum=oddno + oddsum;
		}
		firstdigit++;

		cout<<oddsum;
		cout<<evensum;
		return 0;
}
