#include<iostream>
using namespace std;
int main(){
    int apple_count{5}; //narrowing declaration

    int banana_count{10};    //narrowing declaration

    int total_count{apple_count+banana_count};

    cout<<"the total count is\n"<<total_count <<endl;

    cout<<"the apple count\n"<<apple_count<<endl;

       cout<<"the banana count\n"<<banana_count <<endl;


    return 0;
}