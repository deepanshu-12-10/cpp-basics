#include<iostream>
using namespace std;
void a(char name2[])
{
cin.getline(name2,100);
cout<<name2;
}
int main(){
    char name[100];
    cin>>name;//enter input as "hello world " then you will only get "hello"...
    //.kyuki cin me space ek new place ki tarah kaam krta h..wo space ko bhi count nhi krta h jisse null character waha chla jata h aur wahi end kr deta h
    cout<<name<<endl;
    //char name2[100];
  // a(name2);
    
}