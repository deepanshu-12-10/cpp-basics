#include<iostream>
#include<cstring>
using namespace std;
void printallprefixes(char input1[]){
    for(int i=0;input1[i]!='\0';i++){
        for(int j=0;j<=i;j++){
            cout<<input1[j];
        }
        cout<<endl;
    }
}
int main(){
    char input1[100];
    char input2[100];
    cin.getline(input1,20);
    cin.getline(input2,20);
    if(strcmp(input1,input2)==0) //strcmp(string name 1,string name 2) is an inbuilt function for comparing two strings
   {
    cout<<"true"<<endl;
   }
   else{
    cout<<"false"<<endl;
   }
    int len=strlen(input1); //int len=strlen(string name) is for counting length of a string
    cout<<"length"<<" "<<len<<endl;
    cout<<"befor copying :-"<<endl;
    cout<<"input1"<<" "<<input1<<endl;
    cout<<"input2"<<" "<<input2<<endl;
    strcpy(input1,input2); //pahle humne jitne elements input2 ke the wo input1 me copy kr diye
    cout<<"after copying 1:-"<<endl;
    cout<<"input1"<<" "<<input1<<endl;
    cout<<"input2"<<" "<<input2<<endl;
    strcpy(input1,"hello"); //input1 me sidha ek string hi copy kr di
    cout<<"after copying 2:-"<<endl;
    cout<<"input1"<<" "<<input1<<endl;
    cout<<"input2"<<" "<<input2<<endl;
    strncpy(input1,input2,4);  //input 1 ke ander input2 ke sirf 4 character copy kr diye baki aage ke character input1 ke hi rhenge kyuki isme null character copy nhi ho rha 
    cout<<"after copying 4:-"<<endl;
    cout<<"input1"<<" "<<input1<<endl;
    cout<<"input2"<<" "<<input2<<endl;
    strncpy(input2,input1,14); //input2 ke ander input1 ke 14 characters copy kr do jabki input1 ke pass kuch 10 hi character ho...toh aisi situatiion me wo null ko bhi copy kr dega ..
    cout<<"after copying 5:-"<<endl;  //input2 and input1 same ho jayenge
    cout<<"input1"<<" "<<input1<<endl;
    cout<<"input2"<<" "<<input2<<endl;
    strcpy(input2,input1);  //input1 ke jitne elements the wo ab input2 me copy kr diye 
    cout<<"after copying 3:-"<<endl;
    cout<<"input1"<<" "<<input1<<endl;
    cout<<"input2"<<" "<<input2<<endl;
   
   printallprefixes(input1);
    
}
