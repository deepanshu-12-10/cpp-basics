#include<iostream>
using namespace std;


int main()
{

       	/*  
		Read input as specified in the question.
		Print output as specified in the question.
	*/
  
  int n;
  cin>>n;
  int i=0,sum=0;
  while (i <= n) {
    sum = sum + i;
    i = i + 2;
  }
  cout << sum;
}