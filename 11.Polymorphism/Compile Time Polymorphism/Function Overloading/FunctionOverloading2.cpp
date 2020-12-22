// When type of arguments vary

#include <iostream>
using namespace std;
class cal {
    public:

    int mul(int a, int b) {
        //cout << a*b << endl;
        return a*b;
    }

    float mul(double a, int b) {
        //cout << a*b << endl;
        return a*b;
    }
};
int main(){
    cal c;
    cout << c.mul(10,10) << endl;
    cout << c.mul(10.123, 100) << endl;
return 0;
}

// #include <iostream>  
// using namespace std;  
// int mul(int,int);  
// float mul(float,int);  
// int mul(int a,int b)  
// {  
//     return a*b;  
// }  
// float mul(double x, int y)  
// {  
//     return x*y;  
// }  
// int main()  
// {  
//     int r1 = mul(6,7);  
//     float r2 = mul(0.2,3);   
//     std::cout << "r1 is : " <<r1<< std::endl;  
//     std::cout <<"r2 is : "  <<r2<< std::endl;  
//     return 0;  
// }