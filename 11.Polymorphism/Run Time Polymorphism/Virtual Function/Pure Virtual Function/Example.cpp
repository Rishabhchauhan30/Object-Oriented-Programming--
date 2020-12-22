#include <iostream>
using namespace std;
class Base {
    public:
        virtual void display() = 0;
};

class Derived : public Base {
    public:
        void display() {
            cout << "Derived class Displayed---";
        }

};

int main(){
    Base *basePtr;
    // Base b;  it will show error as we can not make objects of class which is declared as abstract base class i.e in which pure virtual function is there
    Derived d;

    basePtr = &d;

    basePtr->display();

return 0;
}

// Derived class Displayed---