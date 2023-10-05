// Vector
// Vector double their size dynamically when its full

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    cout << arr.size() << endl;     // this will print vector elements
    cout << arr.capacity() << endl; // this will print how much elements can we store
    arr.push_back(5);
    arr.push_back(6);
}