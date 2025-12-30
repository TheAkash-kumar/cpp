#include <iostream>
#include <fstream>
using namespace std;

class Student {
    int roll;
    char name[30];
    float marks;

public:
    void input() {
        cout << "Enter Roll No: ";
        cin >> roll;
        cin.ignore();
        cout << "Enter Name: ";
        cin.getline(name, 30);
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nRoll No: " << roll;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s;
    // Write object to file
    ofstream fout("student.dat", ios::binary);
    s.input();
    fout.write((char*)&s, sizeof(s));
    fout.close();

    // Read object from file
    ifstream fin("student.dat", ios::binary);
    fin.read((char*)&s, sizeof(s));
    cout << "\nData read from file:";
    s.display();
    fin.close();
    return 0;
}
