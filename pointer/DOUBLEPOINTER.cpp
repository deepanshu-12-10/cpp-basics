#include<iostream>
using namespace std;
void increment(int**p2){
    p2=p2+1;
}
void increment1(int **p){
    
    p=p+1;
}
void simple(int *p){
    p=p+1;
}
void increment2(int **p){
    *p=*p+1;
}
void simple1(int *p){
    *p=*p+1;
}
void increment3(int **p2){
    *p2=*p2+1;
}
void increment4(int **p){
    **p=**p+1;
}
void increment5(int **p2){
    **p2=**p2+1;
}

int main(){
    int i=10;
    int *p=&i;
    int **p2=&p;
    cout<<&p2<<endl;
    cout<<&p<<endl;
    cout<<p2<<endl;
    cout<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;
    cout<<&i<<endl;
    cout<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;
    cout<<"increment"<<endl;
    cout<<p2<<endl;
    increment(p2);
    cout<<p2<<endl;
    cout<<"increment1"<<endl;
    cout<<p<<endl;
    increment1(p2);
    cout<<p<<endl;
    cout<<"simple"<<endl;
    cout<<p<<endl;
    simple(p);
    cout<<p<<endl;
    cout<<"simple1"<<endl;
    cout<<*p<<endl;
    simple1(p);
    cout<<*p<<endl;
    cout<<"increment2"<<endl;
    cout<<*p<<endl;
    increment2(p2);
    cout<<*p<<endl;
    cout<<"increment3"<<endl;
    cout<<*p2<<endl;
    increment3(p2);
    cout<<*p2<<endl;
    cout<<"increment4"<<endl;
    cout<<**p2<<endl;
    increment4(p2);
    cout<<**p2<<endl;
    cout<<"increment5"<<endl;
    cout<<**p2<<endl;
    increment5(p2);
    cout<<**p2<<endl;

}