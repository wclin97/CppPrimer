#include <iostream>
using namespace std;


void reset(int &i){

  i = 0;
}

int main(){

  int i = 388;
  reset(i);
  cout<< i << endl;

  return 0;
}