// Type Conversion

#include <iostream>
using namespace std;

class cal {
    public:
        void mul(int a, int b) {
            cout << a*b << endl;
        }

        void mul(float a, int b) {
            cout << a*b << endl;
        }
};

int main(){
    cal c;
    c.mul(10, 10);
    // c.mul(1.23, 10);
return 0;
}

/*

* TypeConversion.cpp:20:19: error: call of overloaded 'mul(double, int)' is ambiguous
   * 20 |     c.mul(1.23, 10);

    the first function mul(10,10) will call the first function and second function mul(1.23, 10) will call Second function
    acc to our prediction.

    This will show an ambiguous error because in c++ all float values are considered as Double so if we replace this float with double
    it will run fine;

    all the floating point constants are treated as double not as a float. 
    If we replace float to double, the program works.
    Therefore, this is a type conversion from float to double.


*/