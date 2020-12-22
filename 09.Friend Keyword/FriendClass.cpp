// If we want to make a a particular fucntion of a class to make it a friend of another class OR
// If we want make whole class (all the fucntions of that class) to become friend of another class then---

#include <iostream>
using namespace std;

class Fruits {
    public:
        void function1() {

        }

        int function2() {

        }
};

class DryFruits {
    
    /* friend void function1(); 
    This will not give syntax error hence it is wrong way of declaration because here not clear of which class this fucntion belongs */

    // *** Here is one condition that they should be public fucntion not the private one
    friend class Fruits; // To make friends with all the fucntion of class 
    friend void Fruits::function1(); // To make friend with particular fucntion 
    friend int Fruits::function2();
};

void function1() {

}

int main(){
return 0;
}