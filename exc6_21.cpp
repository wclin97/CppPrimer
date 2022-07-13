#include <iostream>

using namespace std;

int cmp(int a, int* b){
    if(a > *b) return a;
      else return *b;
}
int main(){
  int b = 9;
  printf("the biggest is %d.\n",cmp(8, &b));
  return 0;
}