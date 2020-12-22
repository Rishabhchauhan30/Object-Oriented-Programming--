//we are initializing and displaying object through method.
#include <bits/stdc++.h>
using namespace std;

class Student {
    public: 
    int id;
    string name;

    void insert(int i, string n) {
        id = i;
        name = n;
    }

    void print() {
        cout<< id << " " << name << endl;
    }
};
int main(){

    Student s1;
    Student s2;
    s1.insert(200,"Rashu");
    s2.insert(201,"Rishabh");
    s1.print();
    s2.print();
return 0;
}