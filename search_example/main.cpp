#include <iostream>

using namespace std;

void standard_search()
{
    int array[] = {1, 5, -10, 30, 60, -1, -100, 50, -30, 20, 10};
    int element = -100;
    int element_idx = -1;

    for (int i = 0; i < 11; i++) {
        if (array[i] == element) {
            element_idx = i;
        }
    }

    if (element_idx >= 0) {
        cout << "The element was found at " << element_idx << endl;
    } else {
        cout << "Element is missing" << endl;
    }
}

void binary_search()
{
    int array[] = {-100, -30, -10, -1, 1, 5, 10, 20, 30, 50, 60};
    int element = 45;
    int element_idx = -1;

    int begin_idx = 0, end_idx = 10;

    while (begin_idx <= end_idx) {
        int mid_index = (begin_idx + end_idx) / 2;
        if (array[mid_index] == element) {
            element_idx = mid_index;
            break;
        } else {
            if (array[mid_index] > element) {
                end_idx = mid_index - 1;
            } else {
                begin_idx = mid_index + 1;
            }
        }
    }

    if (element_idx >= 0) {
        cout << "The element was found at " << element_idx << endl;
    } else {
        cout << "Element is missing" << endl;
    }
}

int main()
{
    standard_search();

    binary_search();

    return 0;
}
