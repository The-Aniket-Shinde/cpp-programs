#include<iostream>
using namespace std;



//square pattern - 1
// int main(){
//     int c,i;
//     for(c=1;c<=4;c++){
//         for(i=1;i<=4;i++){
//             if(i==4){
//                 cout<<i<<endl;
//                 break;
//             }
//             cout<<i;
            
//         }
        
//     }
//     return 0;
// }



//square pattern - 2
// int main(){
//     int c,i,n=3;
//     char ch='A';
//     for(i=0;i<=n-1;i++){
//         for(c=0;c<=n-1;c++){
//             cout<<ch;
//             ch=ch+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// triangle pattern 
// int main(){
//     int i,c,n=4;
//     for(i=1;i<=n;i++){
//         for(c=i;c>0;c--){
//             cout<<c;
//         }
//         cout<<endl;
//     }
//     return 0;
// }



//  Floyds triangle pattern
// int main(){
//     int i=1,c=1,n=4,x=0;
//     for(i=1;i<=n;i++){
//         x=0;
//         while(x<i){
//             cout<<c<<" ";
//             c++;
//             x++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// inverted triangle pattern
// int main(){
//     int i=1,c,n=4,x=1,a;
//     for(i=n;i>0;i--){
        // for(a=0;a<n-i;a++){
        //     cout<<" ";
        // } 
//         c=0;
//         while(c<i){
//             cout<<x;
//             c++;
            
//         }
//         x++;  
//         cout<<endl;
//     }
//     return 0;
// }



//  pyramid pattern
// int main(){
//     int i=0,c=0,n=4,a,b=0;
//     for(i=0;i<=n;i++){
//         c=1;
//         int a=(n/2)-i+1;
//         for(b=0;b<a;b++){
//             cout<<" ";
//         } 
//         while(c<=a){
//             cout<<c;
//             c++;
//         }
//         while(c>0){
//             cout<<c;
//             c--;
//         }
//    j=0a     cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n=4;
//     for(int i=1 ; i<=n ; i++){
//         for(int a=0;a<n-i;a++){
//             cout<<" ";
//         }
//         for(int a=1;a<i;a++){
//             cout<<a;
//         }
//         for(int a=i;a>0;a--){
//             cout<<a;
//         }
//         cout<<endl;
//     }
// }



// hollow diamond pattern
// int main(){
//     int n=4,b;
//     for(int i=1;i<2*n;i++){
//         if(i<=n){
//             for(int a=0;a<n-i;a++){
//                 cout<<" ";
//             }
//             cout<<"*";
//             for(int a=1;a<=i+1;a++){
//                 if(a%2!=0){
//                     b=a;
//                     while(b>0){
//                     cout<<" ";
//                     b--;
//                     }
//                 }
//             }
//             if(i>1){
//                 cout<<"*";
//             }
            
//             cout<<endl;
            
//         }else{
//             for(int a=0;a<i-n;a++){
//                 cout<<" ";
//             }
//             cout<<"*";
//             b=0;
//             while(b<2*n-i){
//                 cout<<" ";
//                 b++;
//             }
//             if(i!=2*n-1){
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }


// int main() {
//     int n = 4;

//     for(int i=1;i<2*n;i++) {

//         if (i<=n) {
//             for (int a=0;a<n-i;a++) {
//                 cout<<" ";
//             }
//             cout<<"*";
//             if(i>1){
//                 for (int a=0;a<2*i-3;a++) {
//                     cout <<" ";
//                 }
//                 cout<<"*";
//             }
//             cout<<endl;
//         }else {
//             for (int a=0;a<i-n;a++) {
//                 cout<<" ";
//             }
//             cout<<"*";
//             if (i<2*n-1) {
//                 for (int a=0;a<2*(2*n-i)-3;a++) {
//                     cout<<" ";
//                 }
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }



//  butterfly pattern
// int main(){
//     int n=4,b=0;
//     b=2*n;
//     for(int i=1;i<=2*n;i++){
//         if(i<=(2*n/2)){
//             b=b-2;
//             for(int a=0;a<i;a++){
//                 cout<<"*";
//             }
//             for(int a=0;a<b;a++){
//                 cout<<" ";
//             }
//             for(int a=0;a<i;a++){
//                 cout<<"*";
//             }
//             cout<<endl;
//         }else{
            
//             for(int a=0;a<=(2*n)-i;a++){
//                 cout<<"*";
//             }
//             for(int a=0;a<b;a++){
//                 cout<<" ";
//             }
//             b=b+2;
//             for(int a=0;a<=2*n-i;a++){
//                 cout<<"*";
//             }
//             cout<<endl;
//         }

//     }
//     return 0;
// }