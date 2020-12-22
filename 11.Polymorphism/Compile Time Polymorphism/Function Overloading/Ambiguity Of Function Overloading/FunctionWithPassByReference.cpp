// Function with pass By reference
#include <iostream>
using namespace std;
class cal {
    public:
        void fun(int a) {
            cout << a;
        }

        void fun(int &b) {
            cout << b;
        }
};
int main(){

    cal c;
    c.fun(10);
return 0;
}