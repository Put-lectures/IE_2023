#include <iostream>

using namespace std;
void foo(int &a, int &b)
{
    a = a + b;
}
int main()
{
    int x = 2, y = 8, c;

    foo(x, y);

    cout << x << ", " << y << endl;

    return 0;
}
