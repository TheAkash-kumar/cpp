#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    void setData(int r, int i) {
        real = r;
        imag = i;
    }

    friend Complex add(Complex, Complex);

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex add(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1, c2, c3;
    c1.setData(3, 4);
    c2.setData(2, 5);

    c3 = add(c1, c2);

    cout << "Sum of Complex Numbers = ";
    c3.display();

    return 0;
}
