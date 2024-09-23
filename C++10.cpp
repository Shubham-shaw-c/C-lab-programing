//Write a program in c++ program to implement reverse floyd's triangle
#include <iostream>
using namespace std;
int main() {
    int rows, num = 1;
    cout << "Enter the number of rows: ";
    cin >> rows;
    int totalNumbers = (rows * (rows + 1)) / 2;
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << totalNumbers-- << " ";
        }
        cout << endl;
    }
}