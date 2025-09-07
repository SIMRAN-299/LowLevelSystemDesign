#include<iostream>
#include<vector>

using namespace std;

class Product{
    private:
        int price;
        
    public:
        string name;
        Product(string name, int price){
            this->name = name;
            this->price = price;
        }
};
class ShoppingList{
    public:
        vector<Product>list;
        void addProduct(Product p){
            list.push_back(p);
        }
};
class SaveToDB{//all the thing in the same class
    public:
        ShoppingList* S;
        // SaveToDB(ShoppingList* S){
        //     this->S = S;
        // }
        virtual void Save(){
            // cout<<"Saving to DB";
            // for(auto i: S->list){
            //     cout<<i.name<<" ";
            // }
        }
        void SaveToMongoDB(){


        }
        void SaveToSQL(){

        }
        void SaveToFile(){

        }

};
// class SaveToMongoDB: public SaveToDB{
//     public:
//         // SaveToMongoDB(ShoppingList* S){
//         //     SaveToDB(S);
//         // };
//         void Save() override{
//             cout<<"Saving to MongoDB ";
//             for(auto i: S->list){
//                 cout<<i.name<<" ";
//             }
//         }
// };


int main(){
    ShoppingList* S = new ShoppingList();
    Product p1("apple",100),p2("banana",10),p3("pineapple",30);
    S->addProduct(p1);
    S->addProduct(p2);
    S->addProduct(p3);
    // SaveToDB* db = new SaveToMongoDB();
    
    // db.Save();

}