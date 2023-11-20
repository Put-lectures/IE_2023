#include <iostream>

using namespace std;

void swap(int a, int b)
{
    int x = a;
    a = b;
    b = x;
}

void swap(int *a, int *b)
{
    int x = *a;
    *a = *b;
    *b = x;
}
int main()
{
    int k = 7, l = -5;
    cout << k << "- " << l << endl;

    //    swap(k, l);
    //    swap(&k, &l);
    cin >> k;

    cout << k << "- " << l << endl;
    return 0;
}
