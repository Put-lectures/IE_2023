#include <iostream>

using namespace std;
struct sPerson
{
    char full_name[25];
    int age;
    char sex;
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

sPerson generate_person()
{
    sPerson person;
    cout << "What is your name? ";
    cin.getline(person.full_name, 25);
    cout << "Age: ";
    cin >> person.age;
    cout << "Sex: ";
    cin >> person.sex;
    return person;
}

void print(const sPerson &person)
{
    cout << person.full_name << ", " << person.age << ", " << person.sex << endl;
}

sPerson *add_element(sPerson *persons, int &current_size, sPerson val)
{
    sPerson *new_array = new sPerson[current_size + 1];
    for (int i = 0; i < current_size; i++) {
        new_array[i] = persons[i];
    }
    new_array[current_size] = val;
    current_size++;
    delete[] persons;
    return new_array;
}
int main()
{
    //    sPerson person = generate_person();

    int N = 5;
    sPerson *persons = new sPerson[N];

    for (int i = 0; i < N; i++)
        fill_data(persons + i);

    sPerson new_person;
    fill_data(&new_person);
    persons = add_element(persons, N, new_person);

    for (int i = 0; i < N; i++)
        print(persons[i]);

    delete[] persons;

    return 0;
}
