// Function with Default Arguments

#include <iostream>
using namespace std;
class cal {
    public:
        void fun(int a, int b = 5) {
            cout << a << " " << b << endl; 
        }

        void fun(int i) {
            cout << i ;
        }
};
int main(){

    cal c;
    // c.fun(10);
return 0;
}

/*
    FunctionWithDefaultArguments.cpp:23:13: error: call of overloaded 'fun(int)' is ambiguous
   23 |     c.fun(10);

    In this example the function fun(10) will show ambiguity.
    * The fun(int a, int b=10) can be called using two ways:
    1--by calling the function with one argument  i.e fun(10)
    2--by calling the function with two arguments i.e fun(4,5);   

*/