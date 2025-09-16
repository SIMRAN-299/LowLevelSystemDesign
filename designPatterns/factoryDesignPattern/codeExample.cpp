#include<iostream>
using namespace std;

class Burger{ // this is an abstract class or interface in java
    // prepare
    private:

    protected:

    public:
        virtual void prepare()=0;// 
};
class BasicBurger: public Burger{
    private:

    protected:

    public:
        virtual void prepare(){
            cout<<"Preparing Basic Burger"<<endl;
        };    

};
class StandardBurger: public Burger{
    private:

    protected:

    public:
        virtual void prepare(){
            cout<<"Preparing Standard Burger"<<endl;
        };
};
class PremiumBurger: public Burger{
    private:

    protected:

    public:
        virtual void prepare(){
            cout<<"Preparing Premium Burger"<<endl;
        }; 
};
// Factor Design Patter
class BurgerFactory{
    public:
        Burger* createBurger(string BurgerType){
            if(BurgerType == "Premium"){
                return new PremiumBurger();
            }
            else if(BurgerType == "Standard"){
                return new StandardBurger();
            }
            else{
                return new BasicBurger();
            }
        }
};
int main(){
    // Burger* B1 = new PremiumBurger();// declaring a pointer
    // B1->prepare();
    BurgerFactory* BF = new BurgerFactory();
    // BF->createBurger("Premium");
    Burger* B1 = BF->createBurger("premium");
    B1->prepare();
    return 0;
}