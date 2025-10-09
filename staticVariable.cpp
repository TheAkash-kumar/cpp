#include <iostream>
#include <string>
using namespace std;

class student {
    private:
        int id;
        string name;
        static int count;
    public:
        void setdata () {
            cout << "Enter name:";
            getline(cin, name); // To get the input with space, it takes input till newline also remove the newline from buffer;
            cout << "Enter id:";
            cin >> id;
            cin.ignore(); //newline character is left in buffer by using cin therefore we explictily remove "newline character from buffer before using getline so that getline() may not take newline as input" by using cin.ignore();
            count++;

        }
        void getdata () {
            cout << "*******************************" << endl;
            cout << "Student name : " << name << endl << "Roll No. : " << id << endl;
            
            
        }
        static void totalstudent () {
            cout << "Total students : " << count << endl;
        }
};
int student :: count;

int main () {
    student a,b,c,d;
    student :: totalstudent (); // display 0
    a.setdata ();
    b.setdata ();
    student :: totalstudent (); // display 2
    c.setdata ();
    d.setdata ();
    a.getdata ();
    b.getdata ();
    c.getdata ();
    d.getdata ();
    cout << "magic" << endl;
    student :: totalstudent (); // display 4
    
    return 0;
}