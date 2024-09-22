#include <iostream>
#include <string>
using namespace std;
struct Faculty {
    string name;
    int age;
    string specialization;
};
int main() {
    int numFaculties;
    cout << "Enter the number of faculties in the department: ";
    cin >> numFaculties;
    Faculty faculties[numFaculties];
    for (int i = 0; i < numFaculties; ++i) {
        cout << "\nEnter details for Faculty " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin.ignore();
        getline(cin, faculties[i].name);
        cout << "Age: ";
        cin >> faculties[i].age;
        cout << "Specialization: ";
        cin.ignore();
        getline(cin, faculties[i].specialization);
    }
    cout << "\nDetails of faculties in the department:" << endl;
    for (int i = 0; i < numFaculties; ++i) {
        cout << "\nFaculty " << i + 1 << ":" << endl;
        cout << "Name: " << faculties[i].name << endl;
        cout << "Age: " << faculties[i].age << endl;
        cout << "Specialization: " << faculties[i].specialization << endl;
    }
}