#include<iostream>
using namespace std;
int f(int n){
    if(n==1||n==2){
        return 1;
    }
    int a=1;
    int b=1;
    int c;
    for(int i=3;i<=n;++i){
        c=a+b;
        a=b;
        b=c;
    }
    return c;

}
int main (){
    int n;
    cin>>n;
    if(n<=0){
        cout<<"invalid output";
    }
      else {
        cout<< f(n) << endl;
    }

    return 0;
}
