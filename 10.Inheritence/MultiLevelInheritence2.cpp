#include <iostream>
using namespace std;

class x {
    protected:
        int a;
    public:
        void num1 (int n) {
            a = n;
        }
};

class y {
    protected:
        int b;
    public:
        void num2 (int n) {
            b = n;
        }
};

class sum : public x, public y {
    public:
        void display() {
            cout << "The value of a is :" << a << endl;
            cout << "The value of b is :" << b << endl;
            cout << "The sum of a and b is : " << a+b << endl;
        }
};


int main(){
    sum s;
    s.num1(10);
    s.num2(20);
    s.display();

return 0;
}

/*
The value of a is :10
The value of b is :20
The sum of a and b is : 30
*/