/*
#--A destructor works opposite to constructor; it destructs the objects of classes. 
#--It can be defined only once in a class. 
#---Like constructors, it is invoked automatically.

#--A destructor is defined like constructor. It must have same name as class. 
#--But it is prefixed with a tilde sign (~).

Note: C++ destructor cannot have parameters. Moreover, modifiers can't be applied on destructors.
*/

#include <bits/stdc++.h>
using namespace std;

class Employee {
    public:

        Employee() {
            cout<<"Constructor Invoked Automatically"<<endl;
        }
        ~ Employee() {
            cout<<"Destructor Invoked Automatically"<<endl;
        }
};
int main(){

    Employee e1;
    Employee e2;

return 0;
}