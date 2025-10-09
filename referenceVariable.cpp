#include <iostream>
// #include<vector>
using namespace std;
void change (int &x) {
    cout << " Enter the value to change :";
    cin >> x;
    cout << &x <<endl; //memory address of x

}
int main () {
    int a = 10;
    cout << "current value of a is :" << a << endl;
    change (a);
    cout <<"the value of a is changed to :" <<a <<endl;
    cout << &a<<endl;
    return 0;
}


// int main () {
//     vector<int> nums = {1,2,3,4};
//     for (int i : nums) {
//         cout << i  <<endl;
//     }
//     return 0;
// }