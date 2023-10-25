#include "functions.h"
using namespace std;

int main()
{
    float tab[100];
    float tab2[50];

    int n;
    char choice;
    do {
        choice = menu();
        switch (choice) {
        case '1': {
            pi();
            break;
        }
        case '2': {
            n = get_array(tab);
            break;
        }

        case '3': {
            calculate_stats(tab, n);
        } break;
        default: {
            break;
        }
        } //switch
    } while (choice != '6');
    system("pause");

    return 0;
}
