#include<iostream>
using namespace std;
// 
class Account{
    public:
        virtual void Deposit(){}
        virtual void Withdraw(){}
};
class SavingsAccount: public Account{
    public:
        void Deposit() override{
            cout<<"Deposit in Savings Account"<<endl;
        }
        void Withdraw() override{
            cout<<"Withdraw in Savings Account"<<endl;
        }
};
class CurrentAccount: public Account{
    public:
        void Deposit() override{
            cout<<"Deposit in Current Account"<<endl;
        }
        void Withdraw() override{
            cout<<"Withdraw in Current Account"<<endl;
        }

};
class FixedDepositAccount: public Account{
    public:
        void Deposit() override{
            cout<<"Deposit in Savings Account"<<endl;
        }
        void Withdraw() override{
            cout<<"Error : Not allowed"<<endl;
        }
};
int main(){
    Account* Account1 = new FixedDepositAccount();
    Account1->Withdraw();// error method is not allowed 
}