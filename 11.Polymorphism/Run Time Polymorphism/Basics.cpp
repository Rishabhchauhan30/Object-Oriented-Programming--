/*
* When Object's Mehtod is invoked at Run time instead of Compile time 
* It is achieved by Method Overriding also called as Late Binding or Dynamic Binding
* Overriding is 
*/

#include <iostream>
using namespace std;

class A {         // Base Class
    int a;

    public:
        void display(){
            cout << "class A";
        }
};

class B : public A {       // Derived Class
    int b;
    public:
        void display() {
            cout << "class B";
        }
};

int main() {
    B b;
    b.display();
return 0;
}