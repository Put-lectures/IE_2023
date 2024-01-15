#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
class cThreshold
{
    double th;

public:
    cThreshold(double th = 0.0)
        : th(th)
    {}
    void set_th(double th_) { th = th_; }

    bool operator()(double val) { return val < th; }
};

int main()
{
    vector<double> array = {1, -5, 6, 8, 10};
    // double th = 0;
    cThreshold threshold(0.0);
    threshold.set_th(2);

    int res = count_if(array.begin(), array.end(), threshold);

    cout << res << endl;
    return 0;
}
