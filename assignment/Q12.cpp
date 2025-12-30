#include <iostream>
using namespace std;

class student {
private:
    int roll;
    string name, dept;
public:
    friend ostream& operator << (ostream& print, student s);
    friend istream& operator >> (istream& input, student& s);

    student () {}
    student(string name, int roll, string dept) {
        this->name = name;
        this->roll = roll;
        this->dept = dept;
    }

};

ostream& operator << ( ostream& print, student s) {
    print << "--------Student Details--------" << endl;
    print << "Name:" << s.name << endl;
    print << "Roll no. :" << s.roll << endl;
    print << "Department:" << s.dept << endl << endl;
    return print;
}

istream& operator >> (istream& input, student& s) {
    cout << "Enter name :";
    input >> s.name;
    cout << "Enter Roll no. :";
    input >> s.roll;
    cout << "Enter Department :";
    input >> s.dept;
    return input;
}
int main () {
    student s1("Akash", 5, "BCA"), s2;
    cin >> s2;
    cout << s1 << s2 ;
    return 0;
}