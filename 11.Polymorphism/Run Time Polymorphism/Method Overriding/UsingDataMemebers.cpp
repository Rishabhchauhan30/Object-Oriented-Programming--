#include <iostream>
using namespace std;

class Humans {
    public:
        void Speak() {
            cout << "Humans Speak--";
        }
};

class Dog : public Humans {
    public:
        void Speak() {
            cout << "Dog Bark---";
        }
};

int main(){
    Humans h = Dog();
    h.Speak();
return 0;
}


// Humans Speak--