#include<iostream>
using namespace std;
int main(){
    int *p=new int;
    *p=20;
    cout<<*p<<endl;
    double *pd=new double;
    char *pd1=new char;
    int *pa=new int[50]; //array memory allocation in heap memory or dynamic memory 
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int *pa1=new int[n]; //user defined array where "new int" is in heap memory...pa1 pointer in stack memory..address of heap memory array==address of pointer pa1 or pa1[0]
    for(int i=0;i<n;i++){
        cin>>pa1[i];
    }
    int max=-1;
    for(int i=0;i<n;i++){
        if(max<pa1[i]){
            max=pa1[i];
        }
    }
    cout<<pa1[0]<<endl;
    cout<<pa1[1]<<endl;
    cout<<*(pa1+1)<<endl;
    cout<<pa1<<endl;
    cout<<*pa1<<endl;
    cout<<max<<endl;
    for(int i=0;i<n;i++){
        cout<<pa1[i]<<" ";
    }
}