#include <iostream>
using namespace std;
int main() {
    const int sections = 2;
    const int students = 5;
    const int subjects = 5;int marks[sections][students][subjects];
    for (int sec = 0; sec < sections; ++sec) {
        cout << "Enter marks for Section " << sec + 1 << ":" << endl;
        for (int stu = 0; stu < students; ++stu) {
            cout << "Student " << stu + 1 << ":" << endl;
            for (int sub = 0; sub < subjects; ++sub) {
                cout << "  Subject " << sub + 1 << ": ";
                cin >> marks[sec][stu][sub];
            }
        }
    }
    for (int sec = 0; sec < sections; ++sec) {
        cout << "\nAverage marks for Section " << sec + 1 << ":" << endl;
        for (int stu = 0; stu < students; ++stu) {
            int sum = 0;
            for (int sub = 0; sub < subjects; ++sub) {
                sum += marks[sec][stu][sub];
            }
            double average = static_cast<double>(sum) / subjects;
            cout << "Student " << stu + 1 << ": " << average << endl;
        }
    }
}