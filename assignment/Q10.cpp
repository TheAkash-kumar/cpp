#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int index;

    cout << "Enter array index (0 to 4): ";
    cin >> index;

    try {
        if (index < 0)
            throw index;          // int exception
        if (index >= 5)
            throw 'o';            // char exception

        cout << "Value = " << arr[index] << endl;
    }

    catch (int i) {
        cout << "Error: Negative index is not allowed." << endl;
    }

    catch (char c) {
        cout << "Error: Index out of range." << endl;
    }

    catch (...) {
        cout << "Unknown error occurred." << endl;
    }

    return 0;
}
