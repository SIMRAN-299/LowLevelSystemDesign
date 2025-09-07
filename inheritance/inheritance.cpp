#include <iostream>
using namespace std;
// Parent Class
class Animal{
    private:
        string name;
        int age;
    public:
        // setter
        void say(){
            cout<<"I am animal"<<endl;
        };
        Animal(){
            this->name = "Default Name";
            this->age = 0;
        }
        Animal(string name,int age){
            this->name = name;
            this->age = age;
        }
        // getters
        int getAge(){
            return this->age;
        }
        string getName(){
            return this->name;
        }
};
class Dog: public Animal{
    public:
        string breed;
        void say(){
            cout<<"I am dog"<<endl;
        }
        void sayBow(){
            cout<<"Bow Bow"<<endl;
        }

};
class Cat: public Animal{

};

int main(){
// static memory allocation
  Animal a("tommy",10);
  cout<<a.getAge()<<endl;
// dynamic Memory allocation
  Animal *b = new Animal("catty",10); 
  cout<<b->getName()<<endl;
  Animal *d = new Dog();
//   d->sayBow();

}