#include <cstring>
#include <iostream>
using namespace std;

void below_zero()
{
    float temperature[] = {10, -5, 10, 30, 25, -7};

    int n = 6;
    int counter = 0;
    for (int i = 0; i < n; i++) {
        //        cout << temperature[i] << endl;
        if (temperature[i] < 0) {
            counter++;
        }
    }
    cout << "Tne number of days below 0C is " << counter << endl;
}
void max_temperature()
{
    float temperature[] = {10, -5, 10, 30, 25, -7};

    int n = 6;
    //    int counter = 0;
    float max_val = temperature[0];
    for (int i = 1; i < n; i++) {
        //        cout << temperature[i] << endl;
        if (temperature[i] > max_val) {
            //            counter++;
            max_val = temperature[i];
        }
    }
    cout << "The maximal temperature is " << max_val << endl;
}

int main()
{
    below_zero();
    max_temperature();
    int counter = 1;
    char text[] = "to be or not to be this the question";
    for (int i = 0; i < strlen(text); i++) {
        if (text[i] == ' ') {
            counter++;
        }
    }
    cout << "The number of words is " << counter << endl;
    return 0;
}
