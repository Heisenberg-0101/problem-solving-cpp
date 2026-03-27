#include<iostream>
using namespace std;
int main(){

    int choice;
    int account_balance = 10000;
   
    int amount;
    int id;
    int pass;
    int upi_id;

    cout<<endl;
    cout<<"enter your choice"<<endl;
    cout<<"1.check account balance"<<endl;
    cout<<"2.withdraw money"<<endl;
    cout<<"3.deposite money"<<endl;
    cout<<"4.upi money"<<endl;
    cout<<"5.reset your upi pin"<<endl;
    cin>>choice;

    switch (choice) {

    case 1:
    cout<<"enter your id"<<endl;
    cin>>id;
    cout<<"enter your pass"<<endl;
    cin>>pass;
    if ( id = 1234 & pass == 1111){
        cout<<account_balance<<endl;
    } else {
        cout<<"erong id or passaward"<<endl;
    }
    break;


   case 2:
   cout<<"enter your id"<<endl;

   cin>>id;
   cout<<endl;
   cout<<"enter your pass"<<endl;
   cin>>pass;
   cout<<endl;
    if(id == 1234 & pass == 1111){
        cout<<"enter ammout"<<endl;
        cin>>amount;
       int balance = account_balance - amount;
        cout<<"current balance"<<endl<<balance;

    } else{
        cout<<"invalid id or pass"<<endl;

    }
    break;


    case 3:
    cout<<"enter your id "<<endl;

    cin>>id;
   
    cout<<endl;
    cout<<"enter your pass"<<endl;
    cin>>pass;
    cout<<endl;

    if(id == 1234 & pass == 1111){
    cout<<"enter the deposite number"<<endl;
    cin>>amount;
    cout<<endl;

    cout<<amount<<endl;
    int net_balance = amount + account_balance;
    cout<<net_balance<<endl;
    }else {
        cout<<"invalid id or pass"<<endl;
    }
    break;


    case 4:
    cout<<"enter your id"<<endl;
    cin>>id;
    cout<<endl;
    cout<<"enter your pass"<<endl;
    cin>>pass;
    cout<<endl;
    if(id == 1234 & pass==1111){
         cout<<"entere your upi id"<<endl;
         cin>>upi_id;
        cout<<"enter ammount"<<endl;
        cin>>amount;
        cout<<endl;

        int net_balancess = amount + account_balance;
        cout<<net_balancess;
    }
    break;
    case 5:
    cout<<"enter your id"<<endl;
    cin>>id;
    cout<<endl;
    cout<<"enter your pass"<<endl;
    cin>>pass;
    cout<<endl;
    if(id == 1234 & pass == 1111){
        cout<<"enter your current pass"<<endl;
        cin>>pass;
        cout<<endl;
        cout<<"enter new pass "<<endl;
        cin>>pass;
        cout<<endl;
        cout<<"your pass change successful "<<endl;
        cout<<"thankyou"<<endl;
    }
    break;

}

    return 0;
}