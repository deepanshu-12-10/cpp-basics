#include<iostream>
using namespace std;
int length(char name[])
{
    cin.getline(name,100);
    int count=0;
for(int i=0;name[i]!='\0';i++){
        count ++;
    }
    return count;
    }
    int main()
{
    char name[100];
    char namee[100];
    cout<<"enter your name"<<endl;
/*name[4]='x';
name[3]='d';
name[1]='\0';
cout<<"name"<<name<<endl;*/
cout<<"length"<<" "<<length(name)<<endl;

}