/*
The Shallow Copy Constructor can only produce the shallow copy.
    # The default Copy Constructor can produce the shallow copy
    # A shallow copy is defined as the copy as it is 
*/

#include <iostream>  
  
using namespace std;  
  
class Demo  
{  
    int a;  
    int b;  
    int *p;  
    public:  
    Demo()  
    {  
        p=new int;  
    }  
    void setdata(int x,int y,int z)  
    {  
        a=x;  
        b=y;  
        *p=z;  
    }  
    void showdata()  
    {  
        std::cout << "value of a is : " <<a<< std::endl;  
        std::cout << "value of b is : " <<b<< std::endl;  
        std::cout << "value of *p is : " <<*p<< std::endl;  
    }  
};  
int main()  
{  
  Demo d1;  
  d1.setdata(4,5,7);  
  Demo d2 = d1;  
  d2.showdata();  
    return 0;  
}

/*
In the above case, a programmer has not defined any constructor, therefore, the statement Demo d2 = d1; 
calls the default constructor defined by the compiler.
The default constructor creates the exact copy or shallow copy of the existing object. 
Thus, the pointer p of both the objects point to the same memory location.


a  b  p      a  b  p
4  5         4  5  
         7
THEREFORE,,,,,,,,,
*/
