#include<iostream>
using namespace std;
int main(){ 
    int n,i,j,k;
    n=18;
    for(i=n;i>=1;i--){
        for(j=n;j>i;j--)
        cout<<" ";
        for(k=1;k<=i;k++)
        cout<<"*";

        cout<<endl;
    }
    return 0;
}