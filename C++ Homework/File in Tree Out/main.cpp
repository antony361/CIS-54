#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
  char c;
  
  ifstream inStream;
  inStream.open("lab6_2_input.txt");
  if(inStream.fail()) {
    cout << "File open failed\n";
    exit(1);
  }

  while (inStream.get(c) && (!inStream.eof())) {
    if(c == '\n')
      cout << endl;
    if(!isspace(c))
      cout << c;
  }
  return 0;
}


