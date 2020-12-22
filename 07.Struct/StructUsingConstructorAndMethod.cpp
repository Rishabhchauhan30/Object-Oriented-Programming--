#include <bits/stdc++.h>
using namespace std;

struct Rectangle {
    int width;
    int height;

    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    void Area() {

        cout << "Area of rectangle : " << (height * width) << endl;
    }
};

int main(){

    struct Rectangle rec1 = Rectangle(5,6);
    rec1.Area();

return 0;
}