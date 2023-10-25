#include <iostream>

using namespace std;
int factorial_iter(int n)
{
    int acc = 1;

    for (int i = 1; i <= n; i++) {
        //        cout << i;
        acc = acc * i;
    }
    return acc;
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n = 1000000000;
    int result = factorial_iter(n);
    cout << result << ",iterative form" << factorial_iter(n) << endl;
    return 0;
}
