#include<iostream>
#include<vector>
using namespace std;


// observer -> looking at observable
// observable -> getting observed

class observer{ // abstract classes
    public: 
        virtual void update()=0;
};
class observable{ // abstract classes
     public:
        virtual void add(observer* O){};
        virtual void remove(){};
        virtual void notify(){};
};  

class observableObj: public observable{
    public:
        string name;
        vector<observer*>list;
        void add(observer* O){
            list.push_back(O);
        }
        void remove(){

        }
        void notify(){
            for(auto i: list){
                i->update();
            }
        }
};
class observerObj: public observer{
    
    public:
        observableObj* Obj;
        void update(){
            cout<<Obj->name<<" updated"<<endl;
        }
        
};
int main(){
    observableObj* O = new observableObj();
    // observable* a2= new observableObj();
    observerObj* a1 = new observerObj();
    observerObj* a2 = new observerObj();
    a1->Obj = O;
    a2->Obj = O;
    O->name = "simran";
    O->add(a1);
    O->add(a2);
    O->notify();
}

