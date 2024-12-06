#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int basic;
    cin>>basic;
    char grade;
    cin>>grade;
    int HRA=0.20*basic;
    int DA=0.50*basic;
	int PF=0.11*basic;
           int total= (basic)+(HRA)+(DA)-(PF);
           cout<<total;
		   return 0;
}
