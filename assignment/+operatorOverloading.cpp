#include <iostream>
#include <string>
using namespace std;

class engTest {
    public:
        int marks;

        engTest (int marks){
            this->marks = marks;
        }
        int operator + (engTest& e) {
            return marks + e.marks;
        }
};
class mathTest {
    public:
        int marks;

        mathTest (int marks){
            this->marks = marks;
        }

        int operator + (mathTest& e) {
            return marks + e.marks;
        }
};

int operator + (engTest e, mathTest m) {
    return e.marks + m.marks;
}

int main () {
    engTest e(45), e2(55);
    mathTest m(99);
    cout << e+m<<endl;
    cout << e+e2;
    return 0;
}
