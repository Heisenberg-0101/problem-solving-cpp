#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"a is greater"<<endl;
        }
    }
    if(b>a){
        if(b>c){
            cout<<"b is greater"<<endl;
        }
    }
    if(c>a){
        if(c>b){
            cout<<"c is grater "<<endl;
        }
    }
    return 0;
}