// Program to overload the Binary Operators

#include <iostream>
using namespace std;

class Complex {
    private:
        int a, b;
    public:
        void setData(int x, int y) {
            a = x;
            b = y;
        }

        void print() {
            cout << a  << " " << b; 
        }

       // Complex add( Complex c ) {
          Complex operator +(Complex c) {
            Complex temp;
            temp.a = a+c.a; // c1 ka a and c2 ka a add hogya add hoke temp k a m aagya
            temp.b = b+c.b; // c1 ka b and c2 ka b add hogya add hoke temp k b m aagya
            return temp;

        }
};

int main(){
    Complex c1, c2, c3;
    c1.setData(3,4);
    c2.setData(5,6);
     c3 = c1 + c2;  // Here c1 and c2 are non pritive type of data
    //c3 = c1.add(c2); // Here c1 call add function in which c2 passed as ab argument and return value is stored in c3
    c3.print();
return 0;
}

// add is an member function so it will be in class
// c2 is passed as an argument which is of type complex
// and answer is stored in c3 so return type should be of complex
