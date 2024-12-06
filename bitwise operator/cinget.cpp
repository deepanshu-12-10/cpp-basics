#include<iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    int count =0;
    while (c != '$' )
    {
        count++;
        cin>>c;
    }
    cout<<"cin"<<count<<endl;
    // diffeernce in counting of cin and cin.get() ....cin.get() counts each and every thing inluding spaces and enter
    char a;
    a=cin.get();
    int count1=0;
    while (a!='$')
    {
        count1++;
        a=cin.get();
    }
    cout<<"cin.get()"<<count1<<endl;
}