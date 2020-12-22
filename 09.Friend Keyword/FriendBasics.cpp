/*
    # if a function is declared as friend then it became the friend of that class and it is capable of accessing its
        private as Well as protected memeber of that class
    # friend funtion is declared inside the class Scope 
        But it is initialized outside the class Scope
    
    # There are two type of member of class
        1-Member Function-------- Which is inside the class
        2-Non-Member Function---- Which is outside the class

    # Friend Fucntion is not Both of them it is a Mixture of both
    # We can decalare friend function in private or public anywhere it willl not create issue bcz it is not a memeber function
    
    * Friend Functions is a reason, why C++ is not called as a pure Object Oriented language.
    * Because it violates the concept of Encapsulation.
*/
#include <iostream>
using namespace std;
class Student{
    private:
        int id;
        string name;
    public:
        Student(int id, string name)
        {
            this->id = id;
            this->name = name;
        }
        friend void printMarks(Student); //In arguments we pass the class 
};

void printMarks(Student s1) {
    s1.id = 200;
    s1.name = "Rashu";

    cout <<  s1.id << " " << s1.name;
} 

int main(){
    Student s1 = Student(201,"Raju");
    Student s2 = Student(202, "Kaju");
    Student s3 = Student(203,"Baadam");
    printMarks(s1);  // There can be more then one object in a class at the time of calling a friend funtion we have to call by
                    // mentioning the object name.
return 0;
}