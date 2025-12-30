#include <iostream>
#include <fstream>
using namespace std;

int main  () {
    ofstream file;
    file.open("data.txt");
    file << "hehehe hahaha ooooooo";
    file.close();

    ifstream fin;
    string str;
    fin.open("data.txt");
    if (!fin) {
        cout << " Error file not opned for reading!";
    }
    getline (fin, str);
    cout << str;
    fin.close();
    return 0;
}