#include<iostream>
using namespace std;
void trimSpaces(char input[]) {
    for(int i=0;input[i]<'\0';i++){

      char m=i+1;

      if (input[i] == ' '){
        char temp=input[i];
        input[i]=input[m];
        input[m]=temp;
      }
        
      }
      cout<<input;
    }
 
int main(){
    char input[100000];
    cin.getline(input,100000);
    trimSpaces(input);
    
    cout<<input;
}