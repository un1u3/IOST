#include <iostream>

class Human{
    public:
    std::string name;
    std::string occupation;
    int age;

    void eat(){
        std::cout<<"THIS person is eating \n";

    }
    void drink(){
        std::cout<<"This person is drinking \n";
    }
    void sleep(){
        std::cout<<"This person is sleeping \n";
    }

};

int main(){

    Human Ram;
    Ram.name = "Ram";
    Ram.occupation = "God";
    Ram.age = 24;

    std::cout<<Ram.name<<std::endl;
    std::cout<<Ram.occupation<<std::endl;
    std::cout<<Ram.age<<std::endl;
    Ram.eat();
    Ram.drink();
    Ram.sleep();


    Human Shyam;
    Shyam.name = "Shyam";
    Shyam.occupation = "God1";
    Shyam.age = 43;

    std::cout<<Shyam.name<<std::endl;
    std::cout<<Shyam.occupation<<std::endl;
    std::cout<<Shyam.age<<std::endl;
    Shyam.eat();
    Shyam.drink();
    Shyam.sleep();

    


}