// basic file operations
#include <iostream>
#include <fstream>
using namespace std;



int main()
{
  cout << "Hola mundo!" << endl;
  ofstream myfile;
  myfile.open ("output.txt");
  myfile << "Hola mundo!\n";
  myfile.close();
  return 0;
}
