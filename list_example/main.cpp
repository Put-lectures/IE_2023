#include <iostream>

using namespace std;
struct sPerson
{
    char full_name[25];
    int age;
    char sex;
    sPerson *N = nullptr;
    sPerson *P = nullptr;
};

void fill_data(sPerson *person)
{
    cout << "What is your name? ";
    cin.getline(person->full_name, 25);
    cout << "Age: ";
    cin >> person->age;
    cout << "Sex: ";
    cin >> person->sex;
    cin.ignore();
}

sPerson *generate_person()
{
    sPerson *person = new sPerson;

    cout << "What is your name? ";
    cin.getline(person->full_name, 25);
    cout << "Age: ";
    cin >> person->age;
    cout << "Sex: ";
    cin >> person->sex;
    cin.ignore();
    return person;
}

sPerson *add_to_list(sPerson *last)
{
    sPerson *new_element = generate_person();
    if (last != nullptr) {
        last->N = new_element;
        new_element->P = last;
    }
    return new_element;
}
void print(const sPerson *person)
{
    cout << person->full_name << ", " << person->age << ", " << person->sex << endl;
}
void print_all(sPerson *current)
{
    while (current != nullptr) {
        print(current);
        current = current->N;
    }
}

int main()
{
    sPerson *root = nullptr;

    root = nullptr;

    //Add nex elements
    sPerson *current = root;
    for (int i = 0; i < 3; i++) {
        current = add_to_list(current);
        if (i == 0)
            root = current;
    }

    print_all(root);

    return 0;
}
