#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of n"<<endl;
    cin>>n;
    if(n<0){
        cout<<" n is a negative number"<<endl;

    } 
    if(n>0){
        cout<<"n is a positive number"<<endl;

    }else{
        cout<<"n is a zero"<<endl;
    }
    return 0;

}