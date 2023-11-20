#include <iostream>

using namespace std;
void fill2d(float **tab, int n, int m, float val = 0)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            tab[i][j] = val;
        }
}

void print2d(float **tab, int n, int m)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << tab[i][j] << ", ";
        }
        cout << endl;
    }
}

float **create_2d(int n, int m)
{
    float **rows = new float *[n];

    for (int i = 0; i < n; i++) {
        rows[i] = new float[m];
    }
    return rows;
}

float *create_array(unsigned int &n)
{
    cout << "what is the size of array?";
    cin >> n;
    float *tab = new float[n];
    for (int i = 0; i < n; i++)
        tab[i] = rand() % 10;
    return tab;
}

void delete2d(float **tab, int n, int m)
{
    for (int i = 0; i < n; i++) {
        delete[] tab[i];
    }
    delete[] tab;
}

int main()
{
    //    unsigned int n;
    //1D array of floats
    /*    float *tab = create_array(n);
    for (int i = 0; i < n; i++)
        cout << tab[i] << endl;
    delete[] tab*/
    ;
    //2D array of floats

    int n = 10, m = 4;
    float **array_2d = create_2d(n, m);

    //    fill2d(array_2d, n, m, 0.5);
    print2d(array_2d, n, m);

    delete2d(array_2d, n, m);
    return 0;
}
