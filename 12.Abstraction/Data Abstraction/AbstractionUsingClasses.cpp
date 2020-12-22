/*
    Abstraction using classes: An abstraction can be achieved using classes.
    A class is used to group all the data members and member functions into a single unit by using the access specifiers. 
    A class has the responsibility to determine which data member is to be visible outside and which is not.
*/

#include <iostream>
using namespace std;
class Family {
    private:
        int n;
        string men;
        string women;
    public:
        void show() {
            cout << "Enter the Number if Memebers in Family: "; cin>>n;
            cout << "Enter the Name of Men-";   cin >> men;
            cout << "Enter the Name of WoMen-"; cin >> women;
        }
};
int main(){
    Family f;
    f.show();
return 0;
}