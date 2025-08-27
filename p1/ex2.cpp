#include <iostream>

using namespace std;

class BankAccount{
    private:
        int accNumber;
        string accHolder;
        double balance;
    public :

    BankAccount(int num , string holder , double balancee){
        accNumber = num;
        accHolder = holder;
        balance = balancee;
    }

    void display(){

        cout<<"Bank Account Infomation"<<endl;
        cout<<"Account Holder : "<<accHolder<<endl;
        cout<<"Account Number : "<<accNumber<<endl;
        cout<<"Balance : "<<balance<<endl;


    }
    
    void deposit(double depo){
        if (depo < 0)
        {
            cout<<"You cannot Deposit that amount of money"<<endl;
            return ;

        }
        
        balance += depo;
        cout<<"Succesfully Deposit "<<depo<<"$"<<endl;
    }   
    void withDraw(double withdraw){
        if(withdraw > balance){
            cout<<"Invalid Balance , Not Enough Money"<<endl;
            return;
        }

        balance -= withdraw;
        cout<<"Succesfully WithDraw "<<withdraw<<"$"<<endl;
    } 
    
    double getBalance(){
        return balance;

    }




};

void findTheRichestUser(BankAccount user1 , BankAccount user2 ,BankAccount user3){
    double u1 = user1.getBalance();
    double u2 = user2.getBalance();
    double u3 = user3.getBalance();
    if( u1 > u2 && u1 > u3 ){
        cout<<"Richest User \n";
        user1.display();
    }else if(u2 > u1 && u2 > u3){
        cout<<"Richest User \n";
        user2.display();
    }else if( u3 > u1 && u3 > u2){
        cout<<"Richest User \n";
        user3.display();
    }else{
        cout<<"All User have the same balance"<<endl;
    }
}




int main(){

    BankAccount user1 = BankAccount(123 , "Nak Nak" , 10.10);
    BankAccount user2 = BankAccount(456 , "Rayuth" , 11.97);
    BankAccount user3 = BankAccount(789 , "Srong Chhay" , 15.32);
    cout<<"Users Bank Infomation "<<endl;
    user1.display();
    cout<<endl;
    user2.display();
    cout<<endl;
    user3.display();
    cout<<endl;
    //Deposite and Withdraw
    user1.deposit(100);
    user1.withDraw(50);
    cout<<endl;
    user1.display();
    cout<<endl;

    //Find the Richest User
    findTheRichestUser(user1 , user2 , user3);




    return 0;
}