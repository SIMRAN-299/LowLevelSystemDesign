#include<iostream>
#include<vector>
using namespace std;

class ISubscriber{
    public:
        virtual void update()=0;
};
class IChannel{
    public:
        virtual void addSubscriber(ISubscriber* S)=0;
        virtual void removeSubscriber()=0;
        virtual void notifyAll()=0;

};
class Channel: public IChannel{
    public:
        
        string name;
        Channel(string N){
            this->name = N;
        }
        vector< ISubscriber* >list;
        void addSubscriber(ISubscriber* S){
            list.push_back(S);
        }
        void removeSubscriber(){

        }
        void notifyAll(){
            for(ISubscriber* S: list){
                S->update();
            }
        }

};
class Subscriber: public ISubscriber{
    public:
        string name;
        Channel* C;
        Subscriber(string n, Channel* Ch){
            this->name = n;
            this->C = Ch;
        }
        void update(){
            cout<<"Hi "<<this->name<<" "<<C->name<<"has a new video"<<endl;
        }
};
int main(){
    Channel* C = new Channel("Flying Beast");
    Subscriber* S1 = new Subscriber("tarun",C);
    Subscriber* S2 = new Subscriber("Manu",C);
    C->addSubscriber(S1);
    C->addSubscriber(S2);
    C->notifyAll();

}
