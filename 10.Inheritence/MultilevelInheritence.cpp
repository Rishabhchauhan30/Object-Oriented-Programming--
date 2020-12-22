//* When one class inherit another class and that derived class is inherited by another class and so on it is called as Multilevel Inheritence
//* E.g -  A(Base Class) ->B(Derived Class Parent is A) -> C(Derived Class Parent is B Grand Parent is A)
//* Therefore,-- B Has Properties of A and C has Properties of A as Well as B also...
//* Inheritance is transitive so the last derived class acquires all the members of all its base classes.

#include <iostream>
using namespace std;

class StreetDogs {
    public:
        void Bark() {
            cout << "barking----" << endl;
        }  
};

class PetDogs : public StreetDogs {
    public:
        void Run() {
            cout << "Running---" << endl;
        }
};

class SmallDogs : public PetDogs {
    public:
        void Eat() {
            cout << "Eating----" << endl;
        }
};

int main(){

    SmallDogs d1;
    d1.Bark();
    d1.Run();
    d1.Eat();
return 0;
}

/*
We make only One Object of last class and we inherit or access all the methods of parents classes:--
o/p--
barking----
Running---
Eating----
*/