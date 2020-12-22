// *The above issue can be resolved by using the class resolution operator with the function.
// * And also mention in main while calling out or mentioning the value
// * In the above example, the derived class code can be rewritten as:


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

        void view(){
            Laptop :: display();
            Computer :: display();
        }
};

int main(){

    Electronic e1;
    e1.Laptop :: display();
    e1.Computer :: display();
return 0;
}


/*
Laptops--
Computer--


*/
