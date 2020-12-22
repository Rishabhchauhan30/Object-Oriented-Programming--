// * an example without the virtual keyword.

#include <iostream>
using namespace std;

class Human {
    public:
        void grow() {
            cout << "Humans Grow";
        }
};

class Men : public Human{
    public:
        void grow() {
            cout << "Men's grow";
        }
};

int main(){
    Human *h;
    Men m;
    h = &m;
    h->grow();
return 0;
}

/*
    Humans Grow

In this *h is BASE class Pointer .
The pointer can only access the base class memebers but not the memebers of derived class
SO, to access the memeber of derived class by base class Pointer there is a need of
Virtual Function


*/