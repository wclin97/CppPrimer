#include <iostream>
#include <iterator>

using namespace std;

int main(){

  int arr[10];
  int* b = begin(arr);
  int* e = end(arr);

  for(int* i = b; i != e; ++i) *i = 0;
  for (auto i : arr) cout << i << " ";

  cout << endl;

  return 0;
}