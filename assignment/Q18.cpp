#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file;

    file.open("data.txt", ios::in | ios::out); //file read or write dono mode me open hua hai

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Move write pointer to a specific position (e.g., byte 10)
    file.seekp(10, ios::beg); 

    // New content to overwrite existing data
    file << "UPDATED";

    // Optional: Read entire file to verify changes
    file.seekg(0, ios::beg);
    char ch;

    cout << "Updated file content:\n";
    while (file.get(ch)) {
        cout << ch;
    }

    file.close();
    return 0;
}
