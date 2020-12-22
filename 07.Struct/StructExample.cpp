/*
    # Structure is a collection of different data types. It is similar to the class that holds different types of data.
    # It is useful if you have data that is not intended to be modified after creation of struct.
    #Structs are used for lightweight objects such as Rectangle, color, Point, etc.

    ## If access specifier is not declared explicitly, then by default access specifier will be public.
    ## The instance of the structure is known as "Structure variable".
*/
#include <bits/stdc++.h>
using namespace std;

struct Rectangle {
    int width , height;
};

int main(){
    Rectangle rec;
    rec.width = 5;
    rec.height = 10;

    cout << "Area of rectangle is = " << (rec.height * rec.width) << endl;
return 0;
}