#include <cmath>
#include <iostream>
using namespace std;
class cFraction
{
    int num;
    int den;
    // int *array;

public:
    cFraction(int n = 0, int d = 1)
        : num(n)
        , den(d)
    // , array(new int[n * d])
    {}
    void input()
    {
        cout << "enter numerator and denominator";
        cin >> num >> den;
    }
    cFraction operator+(const cFraction &f) const
    {
        cFraction result;
        result.num = den * f.num + f.den * num;
        result.den = den * f.den;
        return result;
    }

    cFraction operator*(const cFraction &f) const
    {
        cFraction result;
        result.num = f.num * num;
        result.den = den * f.den;
        return result;
    }
    // cFraction &operator=(const cFraction &val)
    // {
    //     array = new int[val.num * val.den];
    //     for (int i = 0; i < val.num * val.den; i++)
    //         array[i] = val.array[i];
    //     den = val.den;
    //     num = val.num;
    //     return *this;
    // }
    // ~cFraction() { delete[] array; }
    void print() { cout << num << "/" << den; }
    // float decimal() { return static_cast<float>(num) / den; }
    operator float() const { return static_cast<float>(num) / den; }

    friend void debug(const cFraction &x);
    friend istream &operator>>(istream &stream, cFraction &val);
    friend ostream &operator<<(ostream &stream, const cFraction &val);
};
cFraction operator*(int d, const cFraction &f)
{
    return f * cFraction(d);
}

istream &operator>>(istream &stream, cFraction &val)
{
    cout << "enter numerator and denominator";
    stream >> val.num >> val.den;
    return stream;
}

ostream &operator<<(ostream &stream, const cFraction &val)
{
    stream << val.num << "/" << val.den;
    return stream;
}
void debug(const cFraction &x)
{
    cout << "numerator: " << x.num << endl;

    cout << "denominator: " << x.den;
}
int main()
{
    cFraction f(1, 2), b(1), c;
    cFraction d;

    // c.input();
    cin >> c;

    // cFraction g = (f.sum(b)).mul(2);
    cFraction g = 2 * (f + b) * 2;
    cout << g << sin(g);
    debug(g);

    return 0;
}
