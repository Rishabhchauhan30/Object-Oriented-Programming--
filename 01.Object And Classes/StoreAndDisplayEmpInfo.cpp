#include <bits/stdc++.h>
using namespace std;

class Employee {
    public:
        int id;
        float salary;
        string name;

        void insert(int i, float s, string n) {

            id = i;
            salary = s;
            name = n;
        }

        void display() {
            cout<< id << " " << salary << " " << name << endl;
        }
};
int main(){

    Employee E1;
    Employee E2;
    Employee E3;

    E1.insert(200,10000,"Abhi");
    E2.insert(201,20000,"Bob");
    E3.insert(203,8000,"Cary");
    
    E1.display();
    E2.display();
    E3.display();
return 0;
}