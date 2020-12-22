/*  
    If derived class defines same function as defined in base class, it is known as function overriding
    it is used to achieve run time polymorphism
    it is used to provide extra implementation or update which is already provided by its base class
*/

#include <iostream>
using namespace std;

class Animal {
    public:
        void eat() {
            cout << "eating---" << endl;
        }
};

class Dog : public Animal {
    public:
        void eat() {
            cout << "Modified eating---" << endl;
        }
};
int main(){
    Dog d;
    d.eat();
return 0;
}