/*
    Advantages Of Friend KeyWord :----

        1--If we want to access the private memebers of one or more then one class using single operation then Friend Function is Used. 
                A member can only access the memeber function of its class only not the other class memebr function
        2--
*/



#include <iostream>
using namespace std;
class DryFruits; // Forward Declaration

    class Fruits {
        string name;
        int price;

        public:
            void SetData(string n, int p) {
                name = n;
                price = p;
            }
        
        friend void combo(Fruits,DryFruits);  // Friend Function
    };
    
    class DryFruits {
        string name;
        int price;

        public:
            void Setdata(string n, int p) {
                name = n;
                price = p;
            }
        friend void combo(Fruits,DryFruits);    // Friend Function
    };

void combo(Fruits F1, DryFruits DF1) {

    cout << F1.name << " " << F1.price << endl;
    cout << DF1.name << " " << DF1.price << endl;
}

int main(){

    Fruits F1;
    F1.SetData("Apple",70);
    //
    DryFruits DF1;
    DF1.Setdata("Kaju",1000);
    //DF2.Setdata("Baadam",500);
    combo(F1,DF1);
return 0;
}