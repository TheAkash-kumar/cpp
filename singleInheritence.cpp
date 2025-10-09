#include <iostream>
#include <string>
using namespace std;
class person {
private:
    int age;
    string name;
    string gender;
public:
    void setData(void) {
        cout << "Enter Name : ";
        getline(cin, name);
        cout << "Enter gender : ";
        cin >> gender;
        cout << "Enter Age : ";
        cin >> age;
        cin.ignore();
    }
    void getData(void) {
        cout << "Name : " << name << endl;
        cout << "Gender : " << gender << endl;
        cout << "Age : " << age << endl;
    }        
};
class developer : private person {
protected:
    string job;
    int salary;
public:
    void setData () {
        person::setData();
        cout << "Enter salary : ";
        cin >> salary;
        cout << "Enter job : ";
        cin >> job;
    }
    void getData() {
        person::getData();
        cout  << "salary : " << salary << endl;
        cout << "job : " << job << endl;
    }

};
int main() {
    person p;
    cout << "Enter The Details Of Person" << endl;
    p.setData();
    developer d;
    cout << "Enter The Details Of Developer" << endl;
    d.setData();
    cout << "************************Person Details********************" << endl;
    p.getData();
    cout << "************************Developer Details********************" << endl;
    d.getData();
    return 0;
}