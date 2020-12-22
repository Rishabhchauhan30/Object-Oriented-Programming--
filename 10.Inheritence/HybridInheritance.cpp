/* 
* Hybrid Inheritance is The combinaton of more then ont type of Inheritance

* Single + Multiple 
* Multilevel + Multiple etc
A (Base class) -> B (Derived class From A) -> C (Derived Class From A) -> D (Derived Class From B and C) 
it makes A combination of single + multiple Inheritance
*/

#include <iostream>
using namespace std;

class A {
    protected:
        int a;
    public:
        void get_a() {
            cout << "Enter the value of a :";
            cin >> a;
        }
};

class B : public A{
    protected:
        int b;
    public:
        void get_b() {
            cout << "Enter the value of b :";
            cin >> b;
        }
};

class C {
    protected:
        int c;
    public:
        void get_c () {
            cout << "Enter the value of c :";
            cin >> c;
        }
};

class D : public B, public C {
    protected:
        int d;
    public:
        void multi() {
            get_a();
            get_b();
            get_c();
        
            cout << "Multiplication of a , b ,c: " << a*b*c << endl;
        }

};

int main(){
    D d;
    d.multi();

return 0;
}


/*
Enter the value of a :10
Enter the value of b :20
Enter the value of c :30
Multiplication of a , b ,c: 6000
*/
