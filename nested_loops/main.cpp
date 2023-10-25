#include <iostream>

using namespace std;

int main()
{
    int M = 10;
    int N = 10;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (i == 0 || i == M - 1 || j == 0 || j == N - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    int R = 5;

    for (int i = -R; i <= R; i++) {
        for (int j = -R; j <= R; j++) {
            if (R * R >= i * i + j * j)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
