/*
    In c++ class is made abstract by declaring its member function as <Strong> Pure virtual function , it is done by placing '0' in its declaration

    its implementation must be provided by deried classes
    i.e---- virtual void fun() = 0;
*/

#include <iostream>
using namespace std;

class Human {
    public:
        virtual void height() = 0;
};

class Mens : public Human{
    public:
        void height() {
            cout << "Mens Height--" << endl;
        }

};

class Women : public Human {
    public:
        void height() {
            cout << "Womens Height--" << endl;
        }
};

int main(){
    // Human h1;
    Human *h;
    Mens m1;
    Women w1;

    h = &w1;
    h->height();

    h = &m1;
    h->height();
    
    w1.height();
    m1.height();

return 0;
}