#include <iostream>
using namespace std;

class Pizza{
    public:
        string topping1;
        string topping2;
    
    Pizza(string topping1){
        this ->topping1 = topping1;

    }
    Pizza(string topping1, string topping2){
        this ->topping1 = topping1;
        this ->topping2 = topping2;
        
    }
};

int main(){

    Pizza pizza1("pepperoni");
    Pizza pizza2("mushrooms","peppers");

    cout<<pizza1.topping1<<endl;
    cout<<pizza2.topping2<<endl;



}