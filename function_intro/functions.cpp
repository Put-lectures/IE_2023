#include "functions.h"
using namespace std;
int array[500];

int get_array(float *tab_)
{
    int n_;
    cout << "enter number of elements" << endl;
    cin >> n_;
    for (int i = 0; i < n_; i++)
        cin >> tab_[i];
    return n_;
}

char menu()
{
    char choice;
    cout << "1 - calculate Pi" << endl
         << "2 – get fp array" << endl
         << "3 – calculate statics" << endl
         << "4 - sorting" << endl
         << "5 – anagram" << endl
         << "6 - exit" << endl;
    cin >> choice;
    return choice;
}

double calculate_pi(int k)
{
    double pi = 0;
    for (int i = 0; i < k; i++)
        pi = pi + 4.0 * pow(-1, i) / (2 * i + 1);

    return pi;
}

void pi()
{
    int k;
    cout << "enter iteration count" << endl;
    cin >> k;
    //    double pi = calculate_pi(k);
    cout << calculate_pi(k) << endl;
}

void calculate_stats(float *tab, int n)
{
    float min, max, mean;
    stats(tab, n, min, max, mean);

    cout << "Mean value " << mean << ", min value: " << min << ", max value: " << max << endl;
}

void stats(float *tab, int n, float &min, float &max, float &mean)
{
    min = tab[0];
    max = tab[0];
    float sum = 0;

    for (int i = 0; i < n; i++) {
        sum += tab[i];
        if (tab[i] > max)
            max = tab[i];
        if (min > tab[i])
            min = tab[i];
    }
    mean = sum / n;
}
