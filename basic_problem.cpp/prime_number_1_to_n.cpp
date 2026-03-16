#include<iostream>
using namespace std;
int main(){
    int n=10;
    for(int i =1;i<=n;i++){
        if(i%2==0){
            cout<<"this is not a prime number"<<endl;
        
        } else{
            cout<<"this is prime number"<<endl;
        }
        cout<<endl;
    }
    return 0;
}