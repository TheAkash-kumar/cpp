#include <iostream>
#include <fstream>
using namespace std;

//write in file
/*int main () {
    ofstream obj("hello.txt"); //constructor way to open a file
    obj << "hello i'm input text from program";
    obj.close();
    return 0;
}*/
/*
int main () {
    //read from file
    string s;
    ifstream obj("hello.txt");
    getline(obj, s);
    cout << s;
    // ofstream obj("hello.txt");
    obj.close();
    return 0;
}*/

//To read entire file
int main() {
    string str;
    ifstream obj;
    obj.open("hello.txt");
    while(!(obj.eof())) {
        getline(obj,str);
        cout << str << endl;
    }
    obj.close();
    return 0;
}