
#include<iostream>
using namespace std;

class User{
    private:
        string name;
        int id;
        string address;
        
    public:
    // Constructor
        User(string name, int id, string address){
            this->name = name;
            this->id = id;
            this->address = address;
        }
    // getters
        string getName(){
            return this->name;
        }
        int getId(){
            return this->id;
        }
        string getAddress(){
            return this->address;
        }
    // setters
        void setName(){
            
        }
        void setId(){

        }
        void setAddress(){

        }

};

