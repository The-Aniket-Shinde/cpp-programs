#include<iostream>
using namespace std;



//palindrome
// int main(){
//     int i,size,a=0;
//     cout<<"enter size of number"<<endl;
//     cin>>size;
//     int b=size-1;
//     int n[size];
//     int r[size];
//     cout<<"enter the no"<<endl;
//     cout<<"press enter as u type one no."<<endl;
//     for(i = 0; i < size; i++) {
//         cin >> n[i];
//     }

//     while(b>=0){
//         do{
//             r[a]=n[b];
//             break;
//         }while(a<=b);
//         a++;
//         b--;
//     }

//     // int l=sizeof(n)/sizeof(n[0]);
//     // for(a=0;a<size;a++){
//     //     while(b>=0){
//     //         r[b]=n[b];
//     //         b--;
//     //     }
//     // }


//     for(int c=0 ; c<size ; c++){
//         if(r[c]==n[c]){
//             cout<<"palindrome";
//             break;
//         }
//         else{
//             cout<<"not palindrome";
//             break;
//         }
//     }
    
//     return 0;
// }


//armstrong
// int main(){
//     int n,sum=0,a,safe,b;
//     cout<<"enter the no:"<<endl;
//     cin>>n;
//     safe=n;

//     while(n>0){
//         a=n%10;
//         n=n/10;
//         b=a*a*a;
//         sum=sum+b;
//     }

//     if(sum == safe) {
//         cout << "It is an Armstrong number!";
//     }else {
//         cout << "It is NOT an Armstrong number.";
//     }

//     return 0;
// }


//fibonacci
// int main(){
//     int f0=0,f1=1,f2=0,n;
//     cout<<"enter the limit till u want to write code"<<endl;
//     cin>>n;
    
//     while(n>=0){
//         f2=f0+f1;
//         f0=f1;
//         f1=f2;
//         n--;
//     }
//     cout<<f2;
//     return 0;
// }    


//printing prime no 1 to N
// int main(){ 
//     int n,i,c,b; 
//     cout<<"Enter the number: " << endl; 
//     cin>>n; 
    
    // for (i=2; i<=n;i++) { 
    //     c=2; 
    //     b=0; 
    //     while(c<i){ 
    //         if(i%c==0){ 
    //             b++;
    //             break;
    //         }
    //         c++; 
    //     } 
    //     if(b==0){ 
    //         cout<<i<<", "; 
    //     } 
    // } 
    // return 0;
// }