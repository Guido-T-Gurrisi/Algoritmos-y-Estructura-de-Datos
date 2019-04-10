#include <iostream>
#include <fstream>
using namespace std;

int main {
    cout << "Hello world!" << endl;
    ofstream archivo
    archivo.open ("example.txt");
    archivo << "Hello world!\n";
    archivo.close();
    return 0;
}