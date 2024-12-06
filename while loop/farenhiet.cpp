/*Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.*/
#include<iostream>
using namespace std;
int main ()
{
int S,E,W;
cout<<"enter the start fahrenheit value (S)"<<endl;
cin>>S;
cout<<"enter the end fahrenheit value (E)"<<endl;
cin>>E;
cout<<"enter the step size (W)"<<endl;
cin>>W;
while (S<=E)
{
    int C=(S-32)*5/9;
    cout<<S<<" "<<C<<endl;
    S=S+W;
}
}