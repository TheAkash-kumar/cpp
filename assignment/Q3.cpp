#include <iostream>
using namespace std;

class student {
        int roll;
        string name, dept;
        friend ostream& operator << (ostream &out, student s);
    public:
        student(string name, int roll, string dept) {
            this->name = name;
            this->roll = roll;
            this->dept = dept;
        }
       
};

ostream& operator << (ostream &out, student s) {
    out << "Student Details\n";
    out << "Name:" << s.name << endl;
    out << "Roll No:" << s.roll << endl;
    out << "Department:" << s.dept << endl << endl;
    return out;
}

int main () {
    student s1("Akash", 5, "BCA"), s2("Vikash", 6, "BCA");
    cout << s1 << s2;
    return 0;
}
