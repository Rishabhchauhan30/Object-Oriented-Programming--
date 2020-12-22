/* 
Default constructor is that constructor which is called itself when an object is made 
When a object is created and no argument is passed in that object that is called as default constructor
As in this we are just making a object....and the ouput shows that constructor is made and called 
This constructor is made by the compiler 
*/

#include <bits/stdc++.h>
using namespace std;

class Employee {

    public:
        Employee() // This is a constructor
        {
            cout<<" Constructor is called;" << " "; // As much as objects been created this will run according to it
        }

};

int main(){

    Employee E1; // Creating an object for class Employee 
    Employee E2, E3; // We have made 3 objects so constructr will called three times for evry object each


return 0;
}