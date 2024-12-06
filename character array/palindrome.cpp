/* Given a string, determine if it is a palindrome, considering only alphanumeric characters.

Palindrome
A palindrome is a word, number, phrase, or other sequences of characters which read the same backwards and forwards.
Example:
If the input string happens to be, "malayalam" then as we see that this word can be read the same as forward and backwards, it is said to be a valid palindrome.

The expected output for this example will print, 'true'.
From that being said, you are required to return a boolean value from the function that has been asked to implement.
*/
#include<iostream>
using namespace std;
bool checkPalindrome(char str[]) {
    
    int count=0;
    int i=0;
for(int i=0;str[i]!='\0';i++){
    count++;
  }
int j=count;
int a=j-1;
while (i<=a){
    if(str[i]!=str[a]){
      return false;
    }
    if(str[i]==str[a]){
      return true;
    }
i++;
  a--;
}
  }
  /*
while(i<=a-1){
      if(str[i]!=str[a]){
          return false;
      }
    }*/

int main (){
    char str[100];
    cout<<"enter the word"<<endl;
    cin>>str;
    bool output = checkPalindrome(str);
    cout<<output;


}