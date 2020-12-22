// * Let's see the example of single level inheritance which inherits the method.

#include <iostream>
using namespace std;
class Fruits {
    public:
        void cheap() {
            cout << "Fruits are Cheap...." << endl;
        }
};

class DryFruits: public Fruits {
    public:

        void costly() {
            cout << "DryFruis are Costly...." << endl;
        }
};

int main(){

    DryFruits DF1;
    DF1.cheap();
    DF1.costly();

return 0;
}

// * In this object of DryFruit is able to access the Method of Base class.