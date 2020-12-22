// Overloading Of Bianry Operator as a friend Function 
#include <bits/stdc++.h>
using namespace std;
class Complex {
    private:
        int x,y;
    public:
        void setData(int a, int b) {
            x = a;
            y = b;
        }

        void showData() {
            cout<< x << " " << y;
        }

        /* Now we want to make this function as a Friend Function So..... This will not Declare here 
        Complex operator +(Complex c)  
        {
            Complex temp;
            temp.x = x+c.x;  // Here x belongs to caller object
            temp.y = y+c.y; // Here x belongs to caller object

            return temp;
        }
        */

       friend Complex operator +(Complex, Complex);  // Declaration of friend Function
};

Complex operator+(Complex X, Complex Y) // X and Y contains Value of C1 and C2
        {
            Complex temp;
            temp.x = X.x+X.x;  // Here x belongs to caller object
            temp.y = Y.y+Y.y; // Here x belongs to caller object
            return temp;
        }

int main(){
    Complex c1,c2,c3;
    c1.setData(10,30);
    c2.setData(15,25);
    c3 = c1 + c2;   // c3 = +operator(c1,c2) 
    // c3 = c1.operator+(c2) # here c1 is caller object

    /* 
    To run this we have to define a + type operator 
    In this... c1 call its Member Function + (+ Operator here it is like function) and c2 is passed as an argument in it 
    and what return by the c2 is stored in c3 
    */

    /*
    When we will call it in a friend Function then the defiantion will change
    Now... + call hua and c1,c2 pass as an argument

    */
    c3.showData();    

return 0;
}



/*
    When Ever we Overload A BINARY OPERATOR We pass only one argument if we are making it as a Memeber fucntion
    But,
        # If we are making it is as Friend Funtion We have to pass one More argument
    
    IN SHORT----
    When ever we have to overload a function we to pass one extra argument as compared to member function
    while making it Friend Function.

    If memeber Function argument = 0 then Friend Function Argument will be 1
    If memeber Function argument = 2 then Friend Function Argument will be 3
    If memeber Function argument = 3 then Friend Function Argument will be 4

*/