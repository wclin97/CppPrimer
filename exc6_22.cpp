//swap two int pointers by a func;

#include<iostream>
using namespace std;


void swap(int *a, int* b){     //形参类型也可以为const int*&
//（1）int *value是将value指向的地址传进去，所以value指针不可为空指针，必须指向某一地址。
//（2）int *&value则是将该指针变量传进去，相当于传入该指针的地址，所以该指针可以为空指针。
  int* temp = a;
  *a = *b;
  *b = *temp;
}
int main(){
    const int i = 42, j = 99;
    auto lhs = &i;
    auto rhs = &j;
    swap(lhs, rhs);
    cout << *lhs << " " << *rhs << endl;
  return 0;
}