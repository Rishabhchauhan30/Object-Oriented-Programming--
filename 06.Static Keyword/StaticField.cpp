#include <bits/stdc++.h>
using namespace std;

class Account {

    public:
        int AccountNo;   // Instance member variable
        static float rateOfInterest; // Static Memeber Variable / Class Variable

        Account(int AccountNo) {
            this->AccountNo = AccountNo;
        }

        void display() {
            cout<< "Account Number: " << AccountNo << " " << rateOfInterest << endl;
        }
};

float Account::rateOfInterest = 6.5;

int main(){
    Account a1 = Account(200);
    Account a2 = Account(201);

    a1.display();
    a2.display();
return 0;
}