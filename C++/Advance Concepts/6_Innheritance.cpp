#include <iostream>

using namespace std;
class Animal{
    public:
        bool alive = true;
        void eat(){
            cout<<"EATIGN";

        }
    };

class Dog : public Animal{
    public:
    void bark(){
        cout<<"dog goes wooof";
    }

};

class Cat : public Animal{
    public:
    void meow(){
        cout<<"meow";
    }
};

int main(){

    // inheritance = A class can receive atributes and methods from another class 
    //               children classses inherit from a parent class 
    //               helps to reuse similar code found within multiple classes 
   Dog dog;
   cout<< dog.alive;
   dog.eat();
   dog.bark();
   
   Cat cat;
   cat.meow();
   return 0;
}

