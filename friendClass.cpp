#include <iostream>
using namespace std;

class normal {
    private:
        int a,b;
        friend class dost; //friend function declaration -> we can declear under any access modifier it can be public, private or protected.
    public:
        void setData () {
            cout << "Enter the value of a & b : " << endl;
            cin >> a >> b;
        }
        void getData () {
            cout << " a : " << a << "b : " << b << endl;
        }
};
class dost {
    public:
    void getDataOfNormalObj (normal &obj) {
        cout << "the value of a : " << obj.a << endl << "the value of b : " << obj.b<< endl;
    }
};
int main () {
    normal o1;
    o1.setData();
    o1.getData();
    dost o2;
    o2.getDataOfNormalObj(o1);
    return 0;
}