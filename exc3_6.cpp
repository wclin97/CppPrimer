
// Use a range for to change all the characters in a string to X.
#include <iostream>
#include <string>
using namespace std;
 int main(){
     string str = {"test for it"};
     for (char& c : str) c = 'X';
    cout << str << endl;
     return 0;
 }