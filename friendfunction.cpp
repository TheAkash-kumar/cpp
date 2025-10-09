#include <iostream>
using namespace std;

class Employee {
    int id;
    int salary;
    
    public:
        friend int getSalary (Employee obj);       //friend function declaration -> we can declear under any access modifier it can be public, private or protected.
        void setId(void) {
            cout << "Enter the id of employee : ";
            cin >> id;
            cout << "Enter the salary of employee : ";
            cin >> salary;
        }

        void getId(void) {
            cout << "The id of this employee is : " << id << endl;
        }
};

int getSalary (Employee obj) {
    cout << "I am friend function" << endl ;
    return obj.salary;
}

int main()
{
    Employee akash;
    //akash.getSalary();   //This will throw an error because friend functions are not member function of class.
    akash.setId();
    akash.getId();
    cout << "salary : "<<getSalary(akash);

    return 0;
}
