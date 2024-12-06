// #include<iostream>
// using namespace std;
// int main() {
//   char st[] = "ABCD";
//   for(int i = 0; st[i] != '\0'; i++) {
//      cout << st[i] << *(st)+i << *(i+st) << i[st];
//   }
//   return 0;
// }
#include <iostream>
using namespace std;
void updateValue(int *pt){
    *pt = 610 % 255;
}

int main(){
    char ch = 'A';
    char *pt = &ch;
    updateValue((int*)pt);
    cout << ch;
}