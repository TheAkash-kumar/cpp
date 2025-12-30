#include <iostream>
using namespace std;

class complex {
    float real, img;
    friend ostream& operator << (ostream& print, const complex& obj);
    friend istream& operator >> (istream& input, complex& obj);
public:
    complex () {}
    complex (float real, float img) {
        this->real = real;
        this->img = img;
    }
    complex operator + (const complex& obj) {
        complex result;
        result.real = this->real + obj.real;
        result.img = this->img + obj.img;
        return result;
    }
    complex operator - (const complex& obj) {
        complex result;
        result.real = this->real - obj.real;
        result.img = this->img - obj.img;
        return result;
    }
    complex operator * (const complex& obj) {
        complex result;
        result.real = (this->real * obj.real) - (this->img * obj.img);
        result.img = (this->real * obj.img) + (this->img * obj.real);
        return result;
    }
    bool operator == (const complex& obj) {
        if (this->real == obj.real && this->img == obj.img) {
            return true;
        } else {
            return false;
        }
    }
};

ostream& operator << (ostream& print, const complex& obj) {
    print << obj.real << " + " << obj.img << "i";
    return print;
}
istream& operator >> (istream& input, complex& obj) {
    cout << "Taking input of complex number\n";
    cout << "Enter real part:";
    input >> obj.real;
    cout << "Enter imaginary part:";
    input >> obj.img;
    return input;
}
int main () {
    complex c1,c2;
    cin >> c1 >> c2;
    cout << c1 << endl << c2 << endl;
    complex c3 = c1 + c2;
    cout << "(" << c1 << ") + (" << c2 << ") = " << (c1 + c2) << endl;
    if (c1 == c2) {
        cout << "True" << endl;
    } else {
        cout << "false" << endl;
    }
    cout << "(" << c1 << ") * (" << c2 << ") = " << (c1 * c2) << endl;
    return 0;
}