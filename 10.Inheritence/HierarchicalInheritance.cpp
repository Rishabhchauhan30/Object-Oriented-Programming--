/*
* When more then One class is derived from one base class is called as Hierarchical Inheritance.
Base class is same for every Derive class
Father is same for Every Children

* SYNTAX :-
class A{
        Body of class A
};

class B : public A {    
    Body of class B
};

class C : public A {
    Body of class C
};

class D : public A {
    Body of class D
}
*/


#include <iostream>
using namespace std;

class Father {

    public:
        string surname = "Sharma";
        string bloodGroup;

        void get_Father(string Sname, string Bgroup) {
            surname = Sname;
            bloodGroup = Bgroup;
        }
};

class Child_son : public Father {   // Inheriting Father
    public:
        string sonName;

        void get_son_name() {
            cout << "Enter the name Of son: " ;
            cin >> sonName;
        }     

        void Son_name() {
            cout << "Full Name of Son: " << sonName << " " << surname << endl;
        }
};

class Child_daughter : public Father {  // Inheriting Father
    public:
    string DaughterName;

        void get_Daughter_Name() {
            cout << "Enter the name of daughter: " ;
            cin >> DaughterName;
        }

        void Daughter_name() {
            cout << "Full Name of Daughter: " << DaughterName << " " << surname << endl;
        }
};

class Child_twins : public Father {  // Inheriting Father
    public:
    string TwinsName;

        void get_Twins_Name() {
            cout << "Enter the name of Twin's: " ;
            cin >> TwinsName;
        }

        void Twins_name() {
            cout << "Full Name of Daughter: " << TwinsName << " " << surname;
        } 
};

int main(){

    Father f1;
    Child_son s1;
    Child_daughter d1;
    Child_twins t1;

    f1.get_Father("Sharma", "B+");

    s1.get_son_name();
    s1.Son_name();

    d1.get_Daughter_Name();
    d1.Daughter_name();

    t1.get_Twins_Name();
    t1.Twins_name();

return 0;
}