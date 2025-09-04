#include<iostream>
#include<vector>
using namespace std;

class Product{
    public:
        int price;
        string name;
        Product(int p, string n){
            price = p;
            name = n;
        }
};
// a ShoppingCart can have multiple products 
class ShoppingCart{
    public:
    vector<Product*>productList;
    int CalcTotalPrice(){
        int sum = 0;
        for(auto P: productList){
            sum+= P->price;
        }
        return sum;
    }
    void addProduct(Product* p){
        productList.push_back(p);
    }
    void UpdateDB(){
        cout<<"adding cart to DB";
    }
    
};

int main(){
    Product *a = new Product(13,"apple"); 
    Product *b = new Product(20,"banana");
    ShoppingCart *s = new ShoppingCart();
    s->addProduct(a);
    s->addProduct(b);
    
    cout<<s->CalcTotalPrice();
    s->UpdateDB();
}