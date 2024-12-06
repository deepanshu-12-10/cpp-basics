/*
Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), depending upon which the total salary is calculated as:

    Total_salary = Basic + HRA + DA + Allow – PF
where :
HRA   = 20% of basic
DA    = 50% of basic
Allow = 1700 if grade = ‘A’
Allow = 1500 if grade = ‘B’
Allow = 1300 if grade = ‘C' or any other character
PF    = 11% of basic.
Round off the total salary and then print the integral part only.



Note for C++ users :

To round off the value, please include<cmath> library at the start of the program and round off the values in this way.
int ans = round(yourFinalValue);

*/
#include<iostream>
#include<math.h>
using namespace std;

int main() {
	float basic;
	cin>>basic;
	char grade;
	cin>>grade;
	float allow;
	float total_salary;
	float HRA=0.20*basic;
    float DA=0.50*basic;
	float PF=0.11*basic;
        if (grade == 'A') {
			allow=1700;
        } else if (grade == 'B') {
          allow = 1500;
        } 
		else {
         allow = 1300;
        }
          total_salary= (basic)+(HRA)+(DA)+(allow)-(PF);
		   int ans=round(total_salary);
		   cout<<ans;
		   return 0;
}
