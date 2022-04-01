
// Use a range for to change all the characters in a string to X.
// use while
#include <iostream>
#include <string>
using namespace std;
int main() {
  string str = {"test for it"};

  decltype(str.size()) i = 0;
    while (i < str.size()) {
        str[i] = 'X';
        ++i;
    }
    cout << str << endl;

    
    for (i = 0; i < str.size(); ++i) str[i] = 'X';
    cout << str << endl;

  return 0;
}