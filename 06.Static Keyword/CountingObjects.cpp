#include <bits/stdc++.h>
using namespace std;
class Account {
    public:
        int AccountNo;
        string name;
        static int count;

        Account(int AccountNo, string name){
            this->AccountNo = AccountNo;
            this->name = name;
            count++;
        
        }
        void display() {
            cout << "Name-" << name << " " << AccountNo << endl;
        }    
};

int Account::count = 0;

int main(){
    Account e1 = Account(200, "Ramesh"); // Creating an Object Of Account
    Account e2 = Account(201, "Suraj");

    e1.display();
    e2.display();

    cout<<"Total objects are: " << Account::count;
return 0;
}