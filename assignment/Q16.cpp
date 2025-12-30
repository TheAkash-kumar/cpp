#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    ofstream fout;
    string quote = "The brain doesn’t search for truth — it recognizes it.";
    fout.open("data2.txt");
    for (int i = 0; i < quote.length(); i++) {
        fout.put(quote[i]);
    } 
    fout.close();

    ifstream fin;
    fin.open("data2.txt");
    if(!fin) {
        cout << "Error in opening file\n";
        return 1;
    }
    char ch;
    while (fin.get(ch)) {
        cout << ch;
    }
    fin.close();

    return 0;
}