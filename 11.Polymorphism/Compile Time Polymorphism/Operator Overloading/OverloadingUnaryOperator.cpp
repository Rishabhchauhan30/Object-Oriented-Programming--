// overloading a Unary Operator (++)

#include <iostream>
using namespace std;

class Test {
    private:
        int num = 8;
    public:
        void operator ++() {
            num = num + 2;
        }

        void print() {
            cout << "The count is:" << num;
        }
};
int main(){
    Test t;
    ++t; // [ t.operator++() ] it means t calls function name operator ++ and dont pass any argument
    t.print();
return 0;
}
