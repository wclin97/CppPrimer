
/// read a sequence of ints from cin and
/// store those values in a vector.

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    int i;
    while (cin >> i) vec.push_back(i);

    return 0;
}