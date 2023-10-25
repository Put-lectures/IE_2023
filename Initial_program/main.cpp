#include <cmath>
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{
    //    //initial example
    //    cout << "\"Hello Worldd\"" << endl;
    //    cout << sqrt(3.0L) << "\n";

    //    //BMI calculation
    //    float weight = 75, height = 1.76;
    //    cout << "Enter your weight in kg: ";
    //    cin >> weight;
    //    cout << "Enter your height in [m]: ";
    //    cin >> height;
    //    float bmi = weight / (height * height);
    //    cout << "Your BMI is: " << bmi << endl;

    //BMI calculation
    int weight = 75, height = 176;
    cout << "Enter your weight in kg: ";
    cin >> weight;
    cout << "Enter your height in [m]: ";
    cin >> height;
    float bmi = weight / (height / 100.0 * height / 100.0);
    cout << "Your BMI is: " << bmi << endl;

    //    //incrementation
    //    int counter = 1;
    //    cout << counter++ << endl;

    //    //    counter = counter + 1;
    //    cout << counter++ << endl;
    //    cout << counter;

    //    //char type examples
    //    char a = 'b'; //can be also = 97

    //    cout << a++ << endl;

    //    cout << a++ << endl;
    //    cout << a++ << endl;
    //    cout << a++ << endl;

    //    //cout and printf
    //    int a = 3, b = 4, c;

    //    float area = a * b / 2.0;

    //    c = sqrt(a * a + b * b);
    //    //print in C++
    //    std::cout << "hypotenuse of right triangle with legs " << a << " and " << b << " is " << c
    //              << ", the area is" << area << std::endl;
    //    //print in C
    //    printf("hypotenuse of right triangle with legs %d and %d is %d, the area is %.2f\n",
    //           a,
    //           b,
    //           c,
    //           area);

    //    //characters array
    //    char full_name[30], first_name[15], last_name[15];
    //    cout << "what is your name";
    //    cin >> first_name;
    //    cin >> last_name;
    //    // this does not work in C:   full_name = first_name + last_name;
    //    cout << "Hello" << first_name << last_name << endl;

    //    sprintf(full_name, "%s %s", first_name, last_name);

    return 0;
}
