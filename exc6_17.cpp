#include<iostream>
#include<string>

using namespace std;

bool hasUppercase(const string& str){
  for(auto c : str)
    if(isupper(c)) return true;
  return false;
}

const string& changeupper(string& str){
  for(auto& c : str)                      //此处c引用str的字符，因为需要修改str的值；
    if(isupper(c)) c = tolower(c);
  return str;
}
int main()
{
    string str("Hello World!");
    cout << boolalpha << hasUppercase(str) << endl;
    cout << changeupper(str) << endl;
}
