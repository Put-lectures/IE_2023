#include <iostream>

using namespace std;

int main()
{
    int array[5];

    for (int i = 0; i < 5; i++) {
        cin >> array[i];
        if (!cin.good()) {
            cout << "Wrong data";
            cin.ignore(100);

            cin.setstate(ios::goodbit);
            cin.sync();
        }
    }

    for (int i = 0; i < 5; i++) {
        cout << array[i];
    }
    return 0;
}
