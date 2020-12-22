/*
When We make a object and pass another object as argument then it is called as Copy Constructor.
Whenever a copy construtor is called then its value is taken or catched by refernce or pass by reference;

When a object is made then compiler make two constructor Default and Copy 
# If No Constructor is made in Class then,
    Compiler will make Both ---Default Constructor as Well as Copy Constructor
# If We make atleast one Constructor in class then,
    Compiler will only make Copy construcot itself
# If We make Both Copy as Well as Default Constructor in in class
    then Compiler will neither make Copy nor Default Constructor
*/

#include <bits/stdc++.h>
using namespace std;

class Employee {
    private:
        int id;
        float salary;
        string name;
    public:

        Employee(int i, float s, string n)  {
            id = i;
            salary = s;
            name = n;
            cout<< i << " " << s << " " << n << endl;
        }

        Employee(Employee &e) { //Copy Constructor
            cout<< e.id << " "<< e.salary << " " << e.name << endl;
        }
};

int main(){

    Employee e1(201, 2000, "Ramesh");
    Employee e2(202, 5000, "Suresh");
    Employee e3(e1); //This is a copy Constructor
return 0;
}
