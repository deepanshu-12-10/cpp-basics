#include<iostream>
using namespace std;

int main(){
char ch;
int countchars=0, countdigits=0, countwhitespaces=0;
while (true){
	ch=cin.get();
	if (ch=='$') {
		break;
	}
	if(ch>='a'&& ch<='z')
{
	countchars++;
	}
	else if(ch>='0'&&ch<='9'){
countdigits++;
	}
	else if (ch==' '||ch=='\t'|| ch=='\n') {
		countwhitespaces++;
	}
}
cout <<countchars<<" "<<countdigits<<" "<<countwhitespaces<<" "<<endl;
return 0;
}