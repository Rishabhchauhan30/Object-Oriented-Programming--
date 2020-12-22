/*

    Abstraction in header files: An another type of abstraction is header file.
    * For example, pow() function 
    available is used to calculate the power of a number without actually knowing which algorithm function uses to calculate the power.
    Thus, we can say that header files hides all the implementation details from the user.

    example of abstraction in header files.

    * program to calculate the power of a number.
*/

#include <iostream>
#include <math.h>
using namespace std;
int main(){
    cout << pow(3,5);
return 0;
}