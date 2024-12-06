#include<iostream>
using namespace std;
void increment(int input){
    input++;
    cout<<"function : "<<input<<endl;
}
int main()
{
    int i=10;
    increment(i);
    cout<<"main: i"<<" "<<i<<endl;
}