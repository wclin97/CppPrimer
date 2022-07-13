// swap two int values by poiters in a function.

#include <iostream>
#include <string>

using namespace std;

void swap(int* x, int* y) {
  auto temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  for (int lht, rht; cout << "Please Enter:\n", cin >> lht >> rht;) {
    swap(&lht, &rht);
    cout << lht << " " << rht << endl;

    return 0;
  }

}