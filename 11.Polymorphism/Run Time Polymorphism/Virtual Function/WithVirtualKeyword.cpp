/*
*  example of run time polymorphism where we are having two derived classes.
* an example with virtual keyword.
*/

#include <bits/stdc++.h>
using namespace std;

class Human {                                          // Base Class
    public:
        virtual void grow() {                          // Virtual Fucntion
            cout << "Humans Grow----" << endl;
        }
};

class Men : public Human {                              // Inheriting Human Class
    public:
        void grow() {
            cout << "Mens Grow-----" << endl;
        }
};

class Women : public Human {                            // Inheriting Human Class
    public:
        void grow() {
            cout << "WoMen Grow-----" << endl;
        }
};

int main(){
    Human *h;          // Base Class Pointer 
    Human hu;          // Base class Object

    Men m;            // Object of Derived class
    Women w;          // Object of derived class

    h = &hu;
    h->grow();       // Late Binding Occurs

    h = &m;
    h->grow();

    h = &w;
    h->grow();
return 0;
}


/*
Humans Grow----
Mens Grow-----
WoMen Grow-----





*/