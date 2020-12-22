/*
    There are basically two types of datatypes 
    1--Primitive Datatype   e.g--int, char, float 
And 2--Non-Primitive  Datatype --User defined datatypes 
     We can Create our own datatype using
        1--Struct
        2--Union
        3--Enum
    
    Enum improves safety
    Enum Improves Redeability of Code
*/
#include <iostream>
using namespace std;
enum Weeks {

        Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
        // Now these Works As they are store in array
    };

int main(){
    enum Weeks w1;
    w1 = Thursday;

    cout<< w1 <<endl; // return the index of it i.e-- 3
return 0;
}