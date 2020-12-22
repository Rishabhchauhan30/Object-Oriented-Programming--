/*
If we made constructor in our class by passing arguments and we passed a object without arguments and think
it will be made by the complier then it will gives an error
Because if we made a constructor in class then default constructor will no be there or made. 
*/

#include <bits/stdc++.h>
using namespace std;

class Employee {

    public:
 
        Employee(int a, int b) {   // This is a parameterized constructor
            int x = a;
            int y = b;
            cout << x << " " << y << endl;
        }
        Employee() // This is a default constructor
        {
            cout<< "Constructor is called;" << " "; // As much as objects been created this will run according to it
        }

};

int main(){

    Employee(5,6);
    Employee(4,2);
    Employee E1; // Creating an object for class Employee 
    Employee E2, E3; // We have made 3 objects so constructr will called three times for evry object each


return 0;
}