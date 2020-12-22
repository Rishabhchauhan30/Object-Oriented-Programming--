//* Ambiguity Can occured in Multiple Inheritance when a funtion with same name occurs in more than one base class
// Let us see an example of Ambiguity

#include <iostream>
using namespace std;

class Laptop {
    public:
        void display () {
            cout << "Laptops--" << endl;
        }
};

class Computer {
    public:
        void display() {
            cout << "Computer--" << endl;
        }
};

class Electronic : public Laptop, public Computer {
    public:
        void view(){
            //display();
        }
};

int main(){

    Electronic e1;
    //e1.display();
return 0;
}


/*
error: reference to 'display' is ambiguous
        display();

Its Solution in Next Program
*/