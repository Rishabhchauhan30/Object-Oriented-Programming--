/* Name of Funtion is Same But arguments passing are Different is called as Construcor Overloading   
 If a same constructor have different versions is called as Construtor Overloading 
 Suppose a construtor is taking two arguments But we want to call it again for one argument then 
 We create a new constructor have/Taking different arguments */

#include <bits/stdc++.h>
using namespace std;

class Employee {
    public:

        Employee(int a, int b) {

            int x = a;
            int y = b;
            cout<< x  << " " << y << endl;
        }

        Employee(int a) {

            int x = a;
            cout<< x;
        }
};
int main(){


    Employee(5,4);  // This will be called by the first construtor
    Employee(5);   // But this can't called by the first construtor so we make a
                  // new construcor in which we pass one argument only
return 0;
}