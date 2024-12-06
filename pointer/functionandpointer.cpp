/*#include<iostream>
using namespace std;
void print(int *p){
    cout<<*p<<endl;
}
void printincrement(int *p){
    p=p+1;
}
void increment(int *p){
    (*p)++;
}
int main(){
    int i=10;
    int *p=&i;
    print(p);

    cout<<p<<endl;
    printincrement(p);
    cout<<p<<endl;

    cout<<*p<<endl;
    increment(p);
    cout<<*p<<endl;
}*/
#include<iostream>
using namespace std;
int sum(int *a,int size){
    cout<<sizeof(a)<<endl;
    int ans=0;
    for(int i=0;i<size;i++){
        ans+=a[i];
    }
    return ans;
}
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<sizeof(a)<<endl;
    cout<<sum(a,10)<<endl;
    cout<<sum(a+3,7)<<endl;
}