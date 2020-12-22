// * When one class inherits another class, it is known as single level inheritance
// * Let's see the example of single level inheritance which inherits the fields only.

#include <bits/stdc++.h>
using namespace std;
class Fruits {
    public:
        float price = 60;
};

class DryFruits : public Fruits {
    public:
        float DFprice = 500;

};

int main(){

    DryFruits df1;

    cout << "Price of Apple : " << df1.price << endl;
    cout << "Price of Kaaju : " << df1.DFprice;

return 0;
}

// * In this Fruits is Base class and DryFruits is a derived class
// * ANd hence Object of class Dryfruit is able to access Fruits class also.