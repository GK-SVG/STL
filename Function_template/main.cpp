#include <iostream>
using namespace std;

// One function works for all data types. This would work
// even for user defined types if operator '>' is overloaded
template <typename T>
T Max(T x, T y)
{
    return (x > y)? x: y;
}

int main()
{
    cout << Max<int>(3, 7) << endl; // Call Max for int
    cout << Max<double>(3.0, 7.0) << endl; // call Max for double
    cout << Max<char>('g', 'e') << endl; // call Max for char

    return 0;
}
