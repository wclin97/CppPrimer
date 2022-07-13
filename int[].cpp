#include <iostream>
#include <cstdio>

using namespace std;

int main(){
  int x[10] = {0};
  int *p = x;

  int n = sizeof(p)/sizeof(*p);
  printf("%d\n%d",n,*p);
  
  return 0;
}

//另外一种写法end(a) - begin(a)