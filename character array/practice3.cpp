#include<iostream>
using namespace std;
void reverseEachWord(char input[]) {
    
int count=0;
for(int i=0;input[i]!='\0';i++){
    count++;
}
    int ptra=0;
    int ptrb=0;
    for(int i=0;i<=count+1;i++){
        if(input[i] == ' '){
            ptrb=i-1;
            for(int j=ptra;j<=ptrb;j++){
                char temp=input[ptrb];
                input[ptrb]=input[j];
                input[j]=temp;
                ptrb--;
            }
            ptra=i+1;
        }
        if(input[i]=='\0'){
            ptrb=i-1;
            for(int j=ptra;j<=ptrb;j++){
                 char temp=input[ptrb];
                input[ptrb]=input[j];
                input[j]=temp;
                ptrb--;
            }
            break;
        }
    }
}
int main(){
    char input[100];
    cin.getline(input,100);
     reverseEachWord(input);
     cout<<input;
}