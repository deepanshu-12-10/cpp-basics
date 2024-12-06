// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here

// int speed1=36;
// cout<<speed1<<endl;
// double a=5/18;
// cout<<a;
// int speed=speed1*a;
// cout<<speed;
// }
// #include <iostream>
// using namespace std;

// // int main() {
// //     int num;
// // cin>>num;
// // if(num>0){
// //     cout<<"Positive";
    
// // }
// // else if(num==0){
// //     cout<<"Zero";
// // }
// // else if(num<0){
// //     cout<<"Negative";
// // }
// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// int main() {
//     string a;
//     cin>>a;
//     cout<<a;
// }

#include <iostream>
using namespace std;

int main() {
    // update your code here
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b==c){
        cout<<"Equilateral";
    } 
     else if (a!=b || a!=c || b!=c) {
        cout<<"Scalene";
    }
   else {
        cout<<"Isosceles";
    }
  
    

    return 0;
}

