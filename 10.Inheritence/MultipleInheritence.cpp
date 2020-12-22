/* When a class Inherits From Multiple classes i.e two or more then two classes Is called as Multilevel Inh
syntax :---
class Derived_Class _Name : visibility_Base_class-1_Name, Visibility_Base_class-2_Name {

};

class D : visibility B-1, visibility B-2, ?  
{  
    Body of the class;  
}

*/

#include <iostream>
using namespace std;

class Humans {
    public:
        void growth () {
            cout << "We all Grow " << endl;
        }
};

class Animals {
    public:
        void Live () {
            cout << "We all have Life " << endl;
        } 
};

class Plants : public Humans, public Animals  {

    public:
        void energy () {
            cout << "We all need Energy " << endl;
        }
};
int main(){

    Plants p1;
    p1.growth();
    p1.Live();
    p1.energy();
return 0;
}

/*
We can Access using One class all the class

We all Grow 
We all have Life
We all need Energy
*/