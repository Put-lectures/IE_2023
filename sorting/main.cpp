#include <iostream>

using namespace std;

int main()
{
    int array[] = {-8, 5, 1, 10, -100, 0, 2};
    int N = 7;
    bool is_swapped = false;
    int i = 0;
    do {
        is_swapped = false;

        for (int j = 0; j < N - 1 - i; j++)
            if (array[j] > array[j + 1]) {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                is_swapped = true;
            }
        i++;
    } while (is_swapped);

    for (int i = 0; i < N; i++) {
        cout << array[i] << endl;
    }

    return 0;
}
