/*
    # It can be used to pass current object as a parameter to another method.
    # It can be used to refer current class instance variable
*/
#include <bits/stdc++.h>
using namespace std;
class Employee {
    public:
        int id;
        float salary;
        string name;

        Employee(int id, float salary, string name) {
            this->id = id;
            this->salary = salary;
            this->name = name;
        }

        void display() {
            cout<< id << " " << name << " " << salary << endl;
        }
};

int main(){

    Employee e1 = Employee(200,10000,"Raju");
    Employee e2 = Employee(201,12000,"Kaju");
    e1.display();
    e2.display();
return 0;
}