#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //    cout << "the number of args is: " << argc << endl;
    //    for (int i = 0; i < argc; i++)
    //        cout << argv[i] << endl;
    if (argc > 1)
        cout << "Hello " << argv[1] << endl;
    else
        cout << "Hello stranger" << endl;
    return 0;
}
