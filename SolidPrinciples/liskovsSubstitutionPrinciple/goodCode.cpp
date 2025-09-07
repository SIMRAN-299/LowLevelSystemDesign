#include<iostream>
using namespace std;
// 
class NonWithdrawAccount{
    public: 
        virtual void Deposit(){}
};
class Account: public NonWithdrawAccount{
    public:
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
class FixedDepositAccount: public NonWithdrawAccount{
    public:
        void Deposit() override{
            cout<<"Deposit in Fixed Deposit Account"<<endl;
        }

};
int main(){
    NonWithdrawAccount* Account1 = new FixedDepositAccount();
    Account1->Deposit();// error method is not allowed
    Account* account2 = new SavingsAccount();
    account2->Deposit();
    account2->Withdraw(); 
}