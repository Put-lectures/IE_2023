#include <iostream>

using namespace std;

int main()
{
    while (1) {
        cout << "MENU:" << endl;
        cout << "1 – BMI\n2- do sth else\n x - exit";

        char response;
        cin >> response;
        switch (response) {
        case '1': {
            float weight = 75, height = 176;
            cout << "Enter your weight in kg: ";
            cin >> weight;
            cout << "Enter your height in [m]: ";
            cin >> height;
            if (weight > 0 && height > 0) {
                float bmi = weight / (height * height);
                cout << "Your BMI is: " << bmi << endl;
            }
            break;
        }

        case '2': {
            cout << "Placeholder for sectio 2";
            break;
        }
        case 'X':
        case 'x': {
            cout << "Do you want to continue? (y/n): ";
            cin >> response;
            if (response == 'y' || response == 'Y') {
                cout << "let's go" << endl;
            } else {
                cout << "good bye" << endl;
                return 0;
            }
            break;
        }
        }
    }

    return 0;
}
