//its always better to use abstraction or interace rather than inheritance, inheritance introduced complexity in the code

#include<iostream>
using namespace std;

class Cards{
    public:
        virtual void pay(){};
};

class DebitCard: public Cards{
    public:
        void pay() override{
            cout<<"Payment done using Debit Card";
        }
};
class CreditCard: public Cards{
    public:
        void pay() override{
            cout<<"Payment done using Credit Card";
        }
};
class UPI{
    public:
        virtual void pay(){};

};
class Paytm: public UPI{
    public:
        void pay() override{
            cout<<"Payment done using Paytm";
        }
};
class Gpay: public UPI{
        public:
        void pay() override{
            cout<<"Payment done using Gpay";
        }
};
class Payment{ // we can pay using UPI->paytm, Cards -> debitCard, creditCard or netbanking  
    public:
        UPI* a;
        Cards* b;
        void doPayment(){
            a->pay();
        }

};

int main(){
    Payment* P;
    P->a = new Gpay();
    P->doPayment();
}