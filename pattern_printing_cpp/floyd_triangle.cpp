#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    n=10;
    k=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
        cout<<k++<<" ";
        cout<<endl;
    }
    return 0;

}