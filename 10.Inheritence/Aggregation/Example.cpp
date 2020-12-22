#include <iostream>
using namespace std;

class Address {
    public:
        string address_lane;
        string city;
        int PIN;

            Address(string address_lane, string city, int PIN) {
                this->address_lane = address_lane;
                this->city = city;
                this->PIN = PIN;
            } 
};

class Employee {
    private:
        Address* address; //Employee HAS-A Address  
    public:
        int id;
        string name;

            Employee(int id, string name, Address* address) {
                this->id = id;
                this->name = name;
                this->address = address;
            }
            void display() {
                cout << id << " " << name << " " << address->address_lane << " " << address->city << " " << address->PIN << endl;
            }
};

int main(){
    Address a1 = Address("SK-4", "Indirapuram", 201014);
    Employee e1 = Employee(201, "Raju", &a1);
        e1.display();

return 0;
}