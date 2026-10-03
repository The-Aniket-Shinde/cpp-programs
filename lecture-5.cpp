#include<iostream>
using namespace std ;




// calculate sum of digit of a number 
// int sum(int x){
//     int a,sum=0;
//     while(x>0){
//         a=x%10;
//         x=x/10;
//         sum=sum+a;
//     }
//     return sum;
// }
// int main(){
//     int n=150;
//     cout<<sum(n);

// }

// calculate ncr binomial coefficient for n and r
// int fact(int x){
//     int fact =1;
//     for(int i=1;i<=x;i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int calNCR(int n,int r){
//     int a=fact(n);
//     int b=fact(r);
//     int c=fact(n-r);
//     int NCR=a/(b*c);
//     return NCR;
// }

// int main(){
//     int n=8,r=2;
//     int NCR=calNCR(n,r);
//     cout<<NCR;
//     return 0;
// }



// WAF to check if a number is prime or not
// int isprime(int n){
//     int b;
//     for(int i =2;i<n;i++){
//         b=0;
//         if(n%i!=0){
//             b++;
//         }else{
//             cout<<"no is not a prime"<<endl;
//             break;
//         }
//         if(b<2){
//             cout<<"no is prime";
//             break;
//         }
//     }
// }

// int main(){
//     int n=8;
//     isprime(n);
//     return 0;
// }



// WAF to print all prime number from 1 to N
// int isprime(int n){
//     int b,c;
//     for (int i=2; i<=n;i++) { 
//         c=2; 
//         b=0; 
//         while(c<i){
//             if(i%c==0){
//                 b++;
//                 break;
//             }
//             c++; 
//         } 
//         if(b==0){ 
//             cout<<i<<", "; 
//         } 
//     } 
//     return 0;
// }


// int main(){
//     int n=50;
//     isprime(n);
//     return 0;
// }



// WAF To print nth fibonacci
// int fibo(int n){
//     int f0=0,f1=1,f2=0;
//     for(int i=0;i<=n;i++){
//         cout<<f0<<endl;
//         f2=f0+f1;
//         f0=f1;
//         f1=f2;

//     }
    
// }

// int main(){
//     int n=10;
//     fibo(n);
//     return 0;
// }