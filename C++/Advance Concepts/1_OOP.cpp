// // Object-Oriented Programming (OOP) is a programming paradigm that organizes 
// // software design around data (objects) and the methods (functions) that 
// // operate on that data.It is based on the concept of objects, which can 
// // contain data in the form of fields (attributes) and code in the form of 
// // procedures (methods).


// // 1. Class:
// //    - A blueprint for creating objects, encapsulating data and methods.
// //    - Syntax:
     class ClassName {
     public:
         data members;
         member functions;
     };

// // 2. Object:
// //    - An instance of a class. It represents a specific entity with attributes and behaviors.
// //    - Example:
     ClassName obj;

// // 3. Encapsulation:
// //    - Bundling data and methods within a class and restricting access using access specifiers (private, public, protected).
// //    - Example:
     class Person {
     private:
         string name;
     public:
         void setName(string n) { name = n; }
         string getName() { return name; }
     };

// 4. Inheritance:
//    - Deriving a new class from an existing class to promote code reuse.
//    - Syntax:
     class DerivedClass : accessSpecifier BaseClass {
     };

// 5. Polymorphism:
//    - The ability to treat objects of different classes through the same interface.
//    - Implemented via function overloading, operator overloading, and virtual functions.

// 6. Abstraction:
//    - Hiding complex implementation details and exposing only essential features using abstract classes and interfaces.
//    - Syntax:
     class AbstractClass {
         virtual void method() = 0;
     };