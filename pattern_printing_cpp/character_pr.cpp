#include<iostream>
using namespace std;
int main(){

    int i,j,n;

    n=8;

    for(i=n-1;i>=0;i--){

        for(j=i;j<n;j++)

        cout<<(char)('A'+j)<<' ';

        cout<<endl;

    }

    return 0;
    
}