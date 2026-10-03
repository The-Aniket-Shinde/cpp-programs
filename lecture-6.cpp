#include<iostream>
using namespace std;



// decimal to binary 
// int decToBin(int n){
//     int a=0,b=1,ans=0;
//     while(n>0){
//         a=n%2;
//         n=n/2;
//         ans=ans+(a*b);
//         b=b*10;
//     }
//     return ans;
// }
// int main(){
//     int n=6;
//     cout<<decToBin(n);
//     return 0; 
// }



// binary to decimal
int binToDec(int n){
    int a=0,pow=1,ans=0;
    while(n>0){
        a=n%10;
        n=n/10;
        ans=ans+(a*pow);
        pow=pow*2;
    }
    return ans;
}
int main(){
    int n=101010;
    cout<<binToDec(n);
}
