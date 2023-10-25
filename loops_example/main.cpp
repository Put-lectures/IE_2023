#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    //    for (int i = 0; i < 10; i += 2) {
    //        cout << i << endl;
    //    }

    //    for (int i = 10; i >= 0; i -= 2) {
    //        cout << i << endl;
    //    }

    //    //find all divisors
    //    int val = 123;
    //    for (int i = 2; i < val; i++) {
    //        if (val % i == 0) {
    //            cout << i << endl;
    //        }
    //    }

    //Array handling with for
    int array[30];
    int N;

    do {
        cout << "Enter the number of elemnts to be filled: ";

        cin >> N;
    } while (!(N > 0 && N < 30));

    for (int i = 0; i < N; i++) {
        cout << "Enter the elemet " << i << ": ";
        cin >> array[i];
    }

    for (int i = 0; i < N; i++) {
        cout << "Element: " << array[i] << endl;
    }

    //    fstream file("/home/piotr/license.txt", ios::in);
    //    if (file.is_open()) {
    //        char text[50];
    //        while (!file.eof()) //for (; !file.eof();)
    //        {
    //            file >> text;
    //            cout << text << endl;
    //        }
    //    }

    //    array[0] = 6;
    //    array[1] = 1;

    return 0;
}
