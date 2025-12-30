#include <iostream>
using namespace std;
template <typename T>
class numbers{
    T x,y;
public:
    numbers(T x, T y) {
        this->x = x;
        this->y = y;
    }
    T add() {
        return x + y;
    }
    T sub() {
        return x - y;
    }
    T mul() {
        return x * y;
    }
    T div() {
        if (!y) {
            cout << "Division by 0 is not allowed!";
            return 1;
        }
        return x / y;
    }
    void show() {
        cout << x << ", " << y << endl;
    }
};
int main () {
    numbers<float> nums(1.2f, 3.5f);
    cout << "Addition = " << nums.add() << endl;
    cout << "Substraction = " << nums.sub() << endl;
    cout << "Multiplication = " << nums.mul() << endl;
    cout << "Division = " << nums.div() << endl;
    return 0;
}