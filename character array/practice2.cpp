#include<iostream>
using namespace std;
void removeConsecutiveDuplicates(char input[]) {
    for(int i=0;input[i]!='\0';i++){
          if (input[i] != input[i+1]) {
    cout<<input[i];
          } 
    }
}
int main(){
    char input[100];
 cin.getline(input,100);
    removeConsecutiveDuplicates(input);
}