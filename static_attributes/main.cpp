#include <iostream>

using namespace std;
// int global_counter = 0;
// int global_counter_func()
// {
//     global_counter++;
//     return global_counter;
// }
int counter()
{
    static int cnt = 0;
    cnt++;
    return cnt;
}

class Foo
{
public:
    static int a_;
    int b_;
    Foo(int b)
        : b_(b)
    {
        a_++;
    }
    static void print_a() { cout << a_ << endl; }
    void print_all() { cout << a_ << b_ << endl; }
};
int Foo::a_ = 0;

int main()
{
    Foo::print_a();

    Foo v1(3);
    v1.print_all();
    v1.print_a();
    Foo v2(5);
    cout << v1.a_ << " " << v1.b_ << endl;
    cout << v2.a_ << " " << v2.b_ << endl;
    // cout << counter() << endl;
    // cout << counter() << endl;
    return 0;
}
