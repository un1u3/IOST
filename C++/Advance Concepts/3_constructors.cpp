#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;
    
    // constructor shoould be same name as class
    Student(std::string name,int age, double gpa){
        this->name = name; //this act as self 
        this->age = age;
        this->gpa = gpa;

        
    }
};

int main(){
    // constructor - special method that is automatically caleed when an object is instaniated 
    //               useful for assigning values to the attributes as argument 


    Student student1("Ram",27,4);
    Student student2("Shyam",44,3.76);

    std::cout<<student1.name;
    
}