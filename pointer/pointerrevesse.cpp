#include<iostream>
using namespace std;
void func(char *str) 
{
    int count =0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    for(int i=0;str[i]!='\0';i++){
        for (int j = count; j > 0; j++) {
          char temp = str[i];
          str[i] = str[j];
          str[j] = temp;
        }
    }
    cout<<endl;
}
int main(){
    char str[100];

    cin.getline(str,100);
    func(str);
}
