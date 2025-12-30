#include <iostream>
using namespace std;

class Box {
private:
    int length, breadth, height;
public:
    
    Box() {
        length = 0;
        breadth = 0;
        height = 0;
    }

   
    Box(int l, int b, int h) {
        length = l;
        breadth = b;
        height = h;
    }

    void volume() {
        cout << "Volume = " << length * breadth * height << endl;
    }
};

int main() {
    Box b1;          
    Box b2(5, 4, 3);  

    cout << "Default Constructor Box: ";
    b1.volume();

    cout << "Parameterized Constructor Box: ";
    b2.volume();

    return 0;
}
