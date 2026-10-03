#include<iostream>
using namespace std;



// calculator program
int main(){
    int x,a,b,sum,multi,sub,div,remainder;
    cout<<"type 1 if you want to add both no."<<endl;
    cout<<"type 2 if you want to sub both no."<<endl;
    cout<<"type 3 if you want to multi both no."<<endl;
    cout<<"type 4 if you want to div both no."<<endl;
    cout<<"type 4 if you want to remainder both no."<<endl;
    cin>>x;
    cout<<"enter the both no "<<endl;
    cin>>a>>b;
    if(x==1){
        sum=a+b;
        cout<<"your sum is :"<<sum<<endl;
    }
    if(x==2){
        sub=a-b;
        cout<<"your sub is :"<<sub<<endl;
    }
    if(x==3){
        multi=a*b;
        cout<<"your multi is :"<<multi<<endl;
    }
    if(x==4){
        div=a/b;
        cout<<"your div is :"<<div<<endl;
    }
    if(x==5){
        remainder=a%b;
        cout<<"your remainder is :"<<remainder<<endl;
    }
}