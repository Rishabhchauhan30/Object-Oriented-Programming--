// When Number of arguments vary

#include <iostream>
using namespace std;

class cal {
    public:
        static void sum(int a, int b) {
            cout << "Sum of two numbers:-" << (a + b) << endl;
        }

        static void sum(int a, int b, int c) {
            cout << "Sum of three numbers:-" << (a + b +c) << endl;
        }
};

int main(){
    cal c;
    c.sum(10,20);
    c.sum(10,20,30);
return 0;
}